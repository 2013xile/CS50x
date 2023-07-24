# CS50 Week1 C

## Command line interface 命令行

- 操作系统
    - Unix
        - MacOS
    - Linux
        - Ubuntu, Centos, Debian
    - Windows
        - WSL https://learn.microsoft.com/en-us/windows/wsl/install
- Terminal vs Shell
    - iTerm2
    - Zsh (Z Shell)
        - https://ohmyz.sh/
- 常用命令
    - `mkdir` make directory
    - `ls` list
    - `cd` change directory
        - 相对路径、绝对路径
    - `cp` copy
    - `mv` move
    - `rm` remove
    - `rmdir` remove directory
    - `clear` clear
    - `man` manual
- 快捷使用
    - `ctrl+l`
    - `ctrl+a`
    - `ctrl+e`
    - `ctrl+u`

## VSCode

https://code.visualstudio.com/

- Text editor vs IDE (Integrated development environment)
    - JetBrains: GoLand, IntelliJ IDEA, PyCharm
    - SublimeText
    - Atom
- Language server
    - https://code.visualstudio.com/api/language-extensions/language-server-extension-guide
- 主题、插件
- 搜索
- 快捷键
    - `Command/Ctrl + shift + p` 命令
    - `Command/Ctrl + B` 文件管理器
    - <code>Ctrl + `</code> 内置终端
- CS50 lib
    - https://github.com/cs50/libcs50

# 课程内容

human → source code → compiler → machine code

correctness, design, style

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

- make, clang, gcc
- 分号`;`
- `\n`
- header files - libraries
- https://manual.cs50.io/
- Data types
    - char
    - double
    - float
    - int
    - long
    - bool? C99
    - string ?
  
      [Using a string in CS50 library](https://stackoverflow.com/questions/52140699/using-a-string-in-cs50-library)
    
- format code
    - `%c` `%s` `%i` `%f` `%.2f`
- %%
- `=` assignment
- `==` equal
- `++` `+=`
- `%` 求余、取模
- Logical Operators
    - `==`
    - `!=`
    - `!`
    - `||`
    - `&&`
- Conditionals
    - If
    - If … else …
    - If … else if … else …
    - switch…case…
    - `?:`
- Loop
    - while
    - for
    - do…while…
- Magic Numbers
    - `#define`
- Overflow
    - 千年虫
    - 2038-01-19
- type casting
- 推荐书 \<The C Programming Language>