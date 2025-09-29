#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
自动更新doc目录中Unity和Unreal工程的关键文件
从根目录的bin、lib、include目录复制最新版本文件到各个演示工程
"""

import os
import shutil
import glob
import argparse
from pathlib import Path
import logging

# 配置日志
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

class DocFilesUpdater:
    def __init__(self, root_dir="."):
        self.root_dir = Path(root_dir).resolve()
        self.doc_dir = self.root_dir / "doc"
        
        # 定义需要更新的关键文件映射
        self.file_mappings = {
            # 源文件路径 -> 目标文件模式
            "bin/win64/LarkXRDataChannel64.dll": {
                "unity": "**/Assets/Lark/Plugins/x64/LarkXRDataChannel64.dll",
                "unreal": "**/Plugins/LarkXRCloudApp/Binaries/ThirdParty/LarkXRCloudAppLibrary/Win64/LarkXRDataChannel64.dll"
            },
            "bin/linux64/libLarkXRDataChannel64.so": {
                "unity": "**/Assets/Lark/Plugins/x64/libLarkXRDataChannel64.so",
                "unreal": "**/Plugins/LarkXRCloudApp/Binaries/ThirdParty/LarkXRCloudAppLibrary/Linux/x86_64-unknown-linux-gnu/libLarkXRDataChannel64.so"
            },
            "lib/win64/LarkXRDataChannel64.lib": {
                "unreal": "**/Plugins/LarkXRCloudApp/Source/ThirdParty/LarkXRCloudAppLibrary/x64/Release/LarkXRDataChannel64.lib"
            },
            "include/LarkXRDataChannel.h": {
                "unity": "**/Assets/Lark/Plugins/LarkXRDataChannel.h",
                "unreal": "**/Plugins/LarkXRCloudApp/Source/LarkXRCloudApp/Public/LarkXRDataChannel.h"
            },
            "include/LarkXRAiVoice.h": {
                "unity": "**/Assets/Lark/Plugins/LarkXRAiVoice.h",
                "unreal": "**/Plugins/LarkXRCloudApp/Source/LarkXRCloudApp/Public/LarkXRAiVoice.h"
            }
        }
    
    def find_target_files(self, pattern, base_dir):
        """在指定目录中查找匹配模式的文件"""
        return list(base_dir.glob(pattern))
    
    def should_update_file(self, source_file, target_file):
        """检查是否需要更新文件（基于修改时间）"""
        if not target_file.exists():
            return True
        
        source_mtime = source_file.stat().st_mtime
        target_mtime = target_file.stat().st_mtime
        
        return source_mtime > target_mtime
    
    def update_file(self, source_file, target_file, dry_run=False):
        """更新单个文件"""
        try:
            if not source_file.exists():
                logger.warning(f"源文件不存在: {source_file}")
                return False
            
            # 检查是否需要更新（基于修改时间或文件不存在）
            if not self.should_update_file(source_file, target_file):
                logger.info(f"文件已是最新: {target_file}")
                return True
            
            # 确保目标目录存在
            if not target_file.parent.exists():
                logger.info(f"创建目录: {target_file.parent}")
                if not dry_run:
                    target_file.parent.mkdir(parents=True, exist_ok=True)
            
            if dry_run:
                logger.info(f"[DRY RUN] 将更新: {target_file}")
                return True
            
            # 复制文件
            shutil.copy2(source_file, target_file)
            logger.info(f"已更新: {target_file}")
            return True
            
        except Exception as e:
            logger.error(f"更新文件失败 {source_file} -> {target_file}: {e}")
            return False
    
    def update_unity_projects(self, dry_run=False):
        """更新所有Unity工程"""
        logger.info("开始更新Unity工程...")
        unity_dir = self.doc_dir / "unity"
        
        if not unity_dir.exists():
            logger.warning(f"Unity目录不存在: {unity_dir}")
            return 0
        
        updated_count = 0
        total_count = 0
        
        # 查找所有Unity项目目录
        unity_projects = []
        for item in unity_dir.iterdir():
            if item.is_dir() and "LarkDataChannelDemo" in item.name:
                unity_projects.append(item)
        
        logger.info(f"找到 {len(unity_projects)} 个Unity工程")
        
        for project_dir in unity_projects:
            logger.info(f"处理Unity工程: {project_dir.name}")
            
            for source_rel_path, patterns in self.file_mappings.items():
                if "unity" not in patterns:
                    continue
                
                source_file = self.root_dir / source_rel_path
                pattern = patterns["unity"]
                target_files = self.find_target_files(pattern, project_dir)
                
                for target_file in target_files:
                    total_count += 1
                    if self.update_file(source_file, target_file, dry_run):
                        updated_count += 1
        
        logger.info(f"Unity工程更新完成: {updated_count}/{total_count} 个文件已更新")
        return updated_count
    
    def update_unreal_projects(self, dry_run=False):
        """更新所有Unreal工程"""
        logger.info("开始更新Unreal工程...")
        unreal_dir = self.doc_dir / "unreal"
        
        if not unreal_dir.exists():
            logger.warning(f"Unreal目录不存在: {unreal_dir}")
            return 0
        
        updated_count = 0
        total_count = 0
        
        # 查找所有Unreal项目目录
        unreal_projects = []
        for item in unreal_dir.iterdir():
            if item.is_dir() and item.name.startswith("app_plugin_"):
                unreal_projects.append(item)
        
        logger.info(f"找到 {len(unreal_projects)} 个Unreal工程")
        
        for project_dir in unreal_projects:
            logger.info(f"处理Unreal工程: {project_dir.name}")
            
            for source_rel_path, patterns in self.file_mappings.items():
                if "unreal" not in patterns:
                    continue
                
                source_file = self.root_dir / source_rel_path
                pattern = patterns["unreal"]
                target_files = self.find_target_files(pattern, project_dir)
                
                for target_file in target_files:
                    total_count += 1
                    if self.update_file(source_file, target_file, dry_run):
                        updated_count += 1
        
        logger.info(f"Unreal工程更新完成: {updated_count}/{total_count} 个文件已更新")
        return updated_count
    
    def run(self, dry_run=False, update_unity=True, update_unreal=True):
        """运行更新程序"""
        logger.info(f"开始更新doc目录文件，根目录: {self.root_dir}")
        
        if not self.doc_dir.exists():
            logger.error(f"doc目录不存在: {self.doc_dir}")
            return False
        
        total_updated = 0
        
        try:
            if update_unity:
                total_updated += self.update_unity_projects(dry_run)
            
            if update_unreal:
                total_updated += self.update_unreal_projects(dry_run)
            
            if dry_run:
                logger.info(f"[DRY RUN] 模拟更新完成，将更新 {total_updated} 个文件")
            else:
                logger.info(f"更新完成，共更新 {total_updated} 个文件")
            
            return True
            
        except Exception as e:
            logger.error(f"更新过程中发生错误: {e}")
            return False

def main():
    parser = argparse.ArgumentParser(description='自动更新doc目录中Unity和Unreal工程的关键文件')
    parser.add_argument('--root-dir', default='.', help='项目根目录路径（默认当前目录）')
    parser.add_argument('--dry-run', action='store_true', help='模拟运行，不实际更新文件')
    parser.add_argument('--skip-unity', action='store_true', help='跳过Unity工程更新')
    parser.add_argument('--skip-unreal', action='store_true', help='跳过Unreal工程更新')
    parser.add_argument('--verbose', action='store_true', help='详细输出')
    
    args = parser.parse_args()
    
    if args.verbose:
        logging.getLogger().setLevel(logging.DEBUG)
    
    updater = DocFilesUpdater(args.root_dir)
    
    success = updater.run(
        dry_run=args.dry_run,
        update_unity=not args.skip_unity,
        update_unreal=not args.skip_unreal
    )
    
    exit(0 if success else 1)

if __name__ == "__main__":
    main()
