#include <stdio.h>
#include <string.h>
#include "../includes/cmd_utils.h"
#include "../includes/install_utils.h"

int main(int argc, char *argv[]) {
    if (argc == 1) { // 更正条件，argc应
        printf("\033[1;34m用法:cil <命令名>\033[0m\n");
        printf("\033[1;34m例如:cil nginx\033[0m\n");
        printf("\033[1;34m支持nginx,psql(PostgreSQL),pro(进程检查命令),exe(可执行文件操作),base(基础linux检查)\033[0m\n");
        return 1;
    }
    if (argc == 2) { // 更正条件，argc应
        show_command_usage(argv[1]); // 提示功能

    }
  
    // 使用strcmp进行字符串比较，并修正逻辑判断顺序
    if (strcmp(argv[1], "install") == 0 && argc == 3) { // 安装功能
        install_scripts(argv[2]);
    } else if (argc > 2) { // 如果argc大于2但不是"install"命令，则给出错误提示
        printf("\033[1;31mCmdUtils不支持参数数量或未知命令\033[0m\n");
        return 1;
    }

    return 0;
}

// 编译：gcc -I../include src/bootstrap.c src/Utils/cmd_utils.c src/Utils/install_utils.c -o cil
// 注意：确保在编译时包含install_utils.c，因为install_scripts函数定义在此文件中。