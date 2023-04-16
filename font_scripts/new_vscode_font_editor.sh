#!/bin/bash

# 获取当前系统字体
current_font="$(defaults read -g NSGlobalDomain 'AppleFontSmoothing' 2>/dev/null | awk '{print ($1 == "0" ? "Menlo" : "Monaco")}')"

# 安装字体
echo "正在下载 Hack Nerd Font Mono 字体..."
curl -Lo "/tmp/Hack Nerd Font Mono.zip" https://github.com/ryanoasis/nerd-fonts/releases/download/v2.1.0/Hack.zip
echo "正在解压字体文件..."
unzip -o -qq "/tmp/Hack Nerd Font Mono.zip" -d "/tmp/Hack Nerd Font Mono/"
echo "正在安装 Hack Nerd Font Mono 字体..."
cp "/tmp/Hack Nerd Font Mono/Hack Nerd Font Mono.ttf" ~/Library/Fonts/
echo "Hack Nerd Font Mono 字体安装成功！"

# 修改 VSCode 字体设置
code_settings_path="$HOME/Library/Application Support/Code/User/settings.json"
echo "正在修改 VSCode 字体设置..."
if [ ! -f "$code_settings_path" ]; then
  touch "$code_settings_path"
  echo "{" >> "$code_settings_path"
  echo "  \"editor.fontFamily\": \"$current_font, Hack Nerd Font Mono\"," >> "$code_settings_path"
  echo "  \"editor.fontLigatures\": true" >> "$code_settings_path"
  echo "}" >> "$code_settings_path"
else
  if grep -q "Hack Nerd Font Mono" "$code_settings_path"; then
    echo "字体设置已存在，无需修改。"
  else
    sed -i '' "s/\"editor.fontFamily\": \".*\"/\"editor.fontFamily\": \"$current_font, Hack Nerd Font Mono\"/" "$code_settings_path"
    echo "字体设置修改成功！"
  fi
fi