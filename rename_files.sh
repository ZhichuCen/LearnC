#!/bin/bash

# 遍历当前目录及其子目录中的所有文件
find . -type f | while read -r file; do
    # 获取文件的目录
    dir=$(dirname "$file")
    # 获取文件的名称
    base=$(basename "$file")
    # 用下划线替换文件名中的连字符
    new_base="${base//-/_}"

    # 如果新文件名与旧文件名不同，则重命名
    if [ "$base" != "$new_base" ]; then
        mv "$file" "$dir/$new_base"
        echo "重命名: $file -> $dir/$new_base"
    fi
done

echo "重命名完成！"
