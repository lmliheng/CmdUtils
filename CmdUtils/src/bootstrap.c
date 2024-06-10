#include <stdio.h>
#include <string.h>
#include "../includes/cmd_utils.h"
#include "../includes/install_utils.h"
#include "../includes/shell_utils.h"
#include "../includes/ExamAll.h"
#include "../includes/FileSize.h"


int main(int argc, char *argv[]) {
    if (argc == 1) { // argc参数为1时
        printf("\033[1;34m用法:cil (<参数>) <命令名>\033[0m\n");
        printf("\033[1;34m例如:cil nginx\033[0m\n");
        printf("\033[1;34mcil * :支持nginx,psql(PostgreSQL),pro(进程检查命令),exe(可执行文件操作),base(基础linux检查)——————提示功能\033[0m\n");
        printf("\033[1;34mcil i * :支持nginx,psql,nvm,cloc,gcc——————安装功能\033[0m\n");
        printf("\033[1;34mcil s * :支持env——————shell功能\033[0m\n");
        printf("\033[1;34mcil f * :支持size(检查内存大小)——————文件类型检查功能\033[0m\n");
        printf("\033[1;34mcil l * :支持exam——————登录自动执行功能\033[0m\n");
        return 1;
    }

    if (argc == 2) { // argc参数为2时
        show_command_usage(argv[1]); // 提示功能
        
    }

    if (argc < 3) {// argc参数为3时
    } else if (strcmp(argv[1], "i") == 0 && argc == 3) {  // 安装功能，使用strcmp进行字符串比较，并修正逻辑判断顺序
        install_scripts(argv[2]);
    } else if (strcmp(argv[1], "s") == 0 && argc == 3) { // shell功能
        shell_scripts(argv[2]);     
    }else if (strcmp(argv[1], "l") == 0 && argc == 3) { //登录自动执行功能
        login_scripts(argv[2]);                        
    }else if (strcmp(argv[1], "f") == 0 && argc == 3) { // 文件内存检测功能
        printFileSize(argv[2]); 

    } else if (argc > 2) { // 如果argc大于2且不符合参数要求则给出错误提示
        printf("\033[1;31mCmdUtils不支持参数数量或未知命令\033[0m\n");
        return 1;
    }

    return 0;
}

// 编译：gcc -I../include src/bootstrap.c src/Utils/cmd_utils.c src/Utils/install_utils.c src/Utils/shell_utils.c src/LoginShell/ExamAll.c src/FileManagement/FileSize.c -o cil
// 注意：确保在编译时包含install_utils.c，因为install_scripts函数定义在此文件中。