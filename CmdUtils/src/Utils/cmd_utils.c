#include "../../includes/cmd_utils.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void show_command_usage(const char *command) {
    if (strcmp(command, "nginx") == 0) {
        printf("\033[1;34mNginx常用命令：\033[0m\n");
        printf("\033[1;34m1. 查看Nginx版本：nginx -v\033[0m\n");
        printf("\033[1;34m2. 检查Nginx配置文件：nginx -t\033[0m\n");
        printf("\033[1;34m3. 重启Nginx：sudo systemctl restart nginx \033[0m\n");
        printf("\033[1;34m4. 停止Nginx：sudo nginx -s stop\033[0m\n");
        printf("\033[1;34m5. 重新加载配置文件：sudo nginx -s reload\033[0m\n");
        printf("\033[1;34m6. 一键安装nginx(centos 7.x适用)：curl -O https://heng1.oss-cn-beijing.aliyuncs.com/nginx_install_three.sh && bash nginx_install_three.sh\033[0m\n");
    } else if (strcmp(command, "psql") == 0) {
        printf("\033[1;34mPostgreSQL常用命令：\033[0m\n");
        printf("\033[1;34m1. 登录：(1)系统登录：sudo su - postgres (2)远程登录：psql -U postgres -h localhost -p 5432\033[0m\n");
        printf("\033[1;34m2. 进入PostgreSQL的交互式终端：psql\033[0m\n");
        printf("\033[1;34m3. 备份：pg_dump -U postgres -h localhost -p 5432 -F t mydb > mydb_backup.sql\033[0m\n");
        printf("\033[1;34m4. 一键部署psql14：curl -O https://heng1.oss-cn-beijing.aliyuncs.com/psql_install.sh && bash psql_install.sh\033[0m\n");
    } else if (strcmp(command, "pro") == 0) {
        printf("\033[1;34m进程检查常用命令：\033[0m\n");
        printf("\033[1;34m1. 检查端口：netstat -tuln | grep 80或者ps aux | grep 80\033[0m\n");
        printf("\033[1;34m2. 检查资源：free -h\033[0m\n");
    } else if (strcmp(command, "exe") == 0) {
        printf("\033[1;34m可执行文件常用命令：\033[0m\n");
        printf("\033[1;34m1. 添加可执行权限：chmod +x \033[0m\n");
        printf("\033[1;34m2. 编辑软链接文件：vim /etc/profile\033[0m\n");
        printf("\033[1;34m3. 写入链接：export PATH=$PATH:/usr/local/nginx/sbin\033[0m\n");
        printf("\033[1;34m4. 激活软链接：source /etc/profile\033[0m\n");
    } else if (strcmp(command, "base") == 0) {
        printf("\033[1;34m基础linux检查常用命令：\033[0m\n");
        printf("\033[1;34m1. 查看主机名：hostname\033[0m\n");
        printf("\033[1;34m2. 查看发行版本：cat /etc/os-release\033[0m\n");
        printf("\033[1;34m3. 查看系统信息：uname -a\033[0m\n");
        printf("\033[1;34m4. 查看CPU信息：lscpu\033[0m\n");
        printf("\033[1;34m5. 查看内存信息：free -h\033[0m\n");
        printf("\033[1;34m6. 查看磁盘信息：df -h\033[0m\n");
        printf("\033[1;34m7. 系统语系检查:localectl\033[0m\n");
        printf("\033[1;34m8. 欢迎语设置:vim /etc/motd\033[0m\n");
    } else {
        printf("\033[1;31mCmdUtils的提示功能暂不支持命令%s\033[0m\n", command);
    }
}