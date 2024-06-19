#include "../../includes/cmd_utils.h"
#include "PrintColor.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void show_command_usage(const char *command) {
    if (strcmp(command, "nginx") == 0) {

        color_printf(cyan,"Nginx常用命令:\n");
        color_printf(cyan,"1. 查看Nginx版本: nginx -v\n");
        color_printf(cyan,"2. 检查Nginx配置文件:nginx -t\n");
        color_printf(cyan,"3. 重启Nginx:sudo systemctl restart nginx\n");
        color_printf(cyan,"4. 停止Nginx:sudo systemctl stop nginx\n");
        color_printf(cyan,"5. 检查日志:cat /usr/local/nginx/logs/error.logz或者access.log\n");

    } else if (strcmp(command, "psql") == 0) {
        color_printf(cyan,"PostgreSQL常用命令:\n");
        color_printf(cyan,"1. 登录:(1)系统登录:sudo su - postgres (2)远程登录:psql -U postgres -h localhost -p 5432\n");
        color_printf(cyan,"2. 进入PostgreSQL的交互式终端:psql\n");
        color_printf(cyan,"3. 备份:pg_dump -U postgres -h localhost -p 5432 -F t mydb > mydb_backup.sql\n");

    } else if (strcmp(command, "pro") == 0) {
        color_printf(cyan,"进程检查常用命令:\n");
        color_printf(cyan,"1. 检查端口:netstat -tuln | grep 80或者ps aux | grep 80\n");
        color_printf(cyan,"2. 检查资源:free -h\n");                        

    } else if (strcmp(command, "exe") == 0) {
        color_printf(cyan,"可执行文件常用命令:\n");
        color_printf(cyan,"1. 添加可执行权限:chmod +x \n");
        color_printf(cyan,"2. 编辑软链接文件:vim /etc/profile\n");
        color_printf(cyan,"3. 写入链接:export PATH=$PATH:/usr/local/nginx/sbin\n");
        color_printf(cyan,"4. 激活软链接:source /etc/profile\n");                                


    } else if (strcmp(command, "base") == 0) {
        color_printf(cyan,"基础linux检查常用命令:\n");   
        color_printf(cyan,"1. 查看主机名:hostname\n");   
        color_printf(cyan,"2. 查看发行版本:cat /etc/os-release\n");   
        color_printf(cyan,"3. 查看系统信息:uname -a\n");   
        color_printf(cyan,"4. 查看CPU信息:lscpu\n");   
        color_printf(cyan,"5. 查看内存信息:free -h\n");   
        color_printf(cyan,"6. 查看磁盘信息:df -h\n");   
        color_printf(cyan,"7. 系统语系检查:localectl\n");   
        color_printf(cyan,"8. 欢迎语设置:vim /etc/motd\n");                           
                                                        
    }else if (strcmp(command, "updata") == 0) {  // 增加的updata命令
    }else if (strcmp(command, "version") == 0) {  // 增加的updata命令
    }else if (strcmp(command, "sl") == 0) {  // 增加的sl命令
    
    }else {
        color_printf(cyan,"CmdUtils的提示功能暂不支持命令\n");         
    }
}