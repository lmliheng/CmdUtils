#include<stdio.h>
#include<string.h>
#include "../include/cmd_utils.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("用法:cil <命令名>\n");
        printf("例如:cil nginx\n");
        printf("支持nginx,psql(PostgreSQL),pro(进程检查命令),exe(可执行文件操作),base(基础linux检查)\n");
        return 1;
    }

    show_command_usage(argv[1]);

    return 0;
}

// 编译：gcc -I../include src/bootstrap.c src/cmd_utils.c -o cil