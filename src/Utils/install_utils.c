#include "../../includes/install_utils.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void install_scripts(const char *script){
    if (strcmp(script, "nginx") == 0){
          system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/nginx_install_ssl_four.sh && bash nginx_install_ssl_four.sh");
          system("source /etc/profile");
          system("rm -rf /usr/local/nginx/nginx-1.18.0");
          system("nginx -v");
    }else if (strcmp(script, "psql") == 0) {
         system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/psql_install.sh && bash psql_install.sh");
    }else if (strcmp(script, "nvm") == 0) {
         system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/nvm_install_five.sh && bash nvm_install_five.sh");
         system("nvm -v");
    }else if (strcmp(script, "cloc") == 0) {
         system("sudo yum install epel-release -y && sudo yum install cloc -y");
    }else if (strcmp(script, "gcc") == 0) {
         system("sudo yum groupinstall \"Development Tools\"");
         system("gcc -v");
    }
    
    else {
    printf("\033[1;31mCmdUtils的安装功能暂不支持该软件\033[0m\n");
    }

}