#include <stdio.h>
#include <string.h>


#include "PrintColor.h" // 静态链接库

#include "../includes/cmd_utils.h"
#include "../includes/install_utils.h"
#include "../includes/shell_utils.h"
#include "../includes/ExamAll.h"
#include "../includes/FileInfo.h"
#include "../includes/updata_utils.h"
#include "../includes/Version.h"
#include "../includes/sl.h"
#include "../includes/print_figlet.h"



// 也许需要一个系统匹配版本调度程序



int main(int argc, char *argv[]) {
    if (argc == 1) { // argc参数为1时

        color_printf(cyan,"用法:cil (<参数>) <命令名>\n");
        color_printf(cyan,"例如:cil i nginx 安装中间件Nginx\n");
        color_printf(cyan,"cil version/updata :检查当前版本以及版本更新\n");
        color_printf(cyan,"cil * :支持nginx,psql(PostgreSQL),pro(进程检查命令),service(可执行文件操作),base(基础linux检查),sl——————提示以及更新功能\n");
        color_printf(cyan,"cil i * :支持nginx,psql,nvm,cloc,gcc,git——————安装功能\n");
        color_printf(cyan,"cil s * :支持cil,env,banner,exam,cpu,free,system——————shell功能\n");
        color_printf(cyan,"cil f * :支持exam(目录检查),info(目录下所有文件检查),nginx,psql——————文件类型检查功能\n");
        color_printf(cyan,"cil l * :支持exam——————登录自动执行功能\n");
        print_figlet("cmdutils");


        return 1;
    }

    if (argc == 2) { // argc参数为2时


        updata_scripts(argv[1]);  // 更新至最新版功能
        print_version(argv[1]);  // 版本打印功能
        show_command_usage(argv[1]); // 提示功能
        sl_bootstrap(argv[1]);  // 需要使用第三方库#include <curses.h>
        
        //
        //安装：sudo yum install ncurses-devel
        //查找：ls /usr/include/ | grep curses.h
        //

        return 1;

    }

    if (argc < 3) {// argc参数为3时
    } else if (strcmp(argv[1], "i") == 0 && argc == 3) {  // 安装功能，使用strcmp进行字符串比较，并修正逻辑判断顺序
        install_scripts(argv[2]);
    } else if (strcmp(argv[1], "s") == 0 && argc == 3) { // shell功能
        shell_scripts(argv[2]);     
    } else if (strcmp(argv[1], "l") == 0 && argc == 3) { //登录自动执行功能
        login_scripts(argv[2]);                        
    } else if (strcmp(argv[1], "f") == 0 && argc == 3) { // 文件检测功能
        PrintFileInfo(argv[2]); 
    } else if (argc > 2) { // 如果argc大于2且不符合参数要求则给出错误提示
        color_printf(cyan,"CmdUtils不支持参数数量或未知命令\n");
        return 1;
    }

    return 0;
}

