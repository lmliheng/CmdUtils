#include "../../includes/shell_utils.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void shell_scripts(const char *script){
    if (strcmp(script, "env") == 0){
          system("env");
    }else if(strcmp(script, "banner") == 0){
          system("vim /etc/motd");
    }else if(strcmp(script, "exam") == 0){
          system("cat /etc/os-release");
    }else if(strcmp(script, "cpu") == 0){
          system("lscpu");
    }else if(strcmp(script, "free") == 0){
          system("free -h");
    }else if(strcmp(script, "system") == 0){
          system("uname -a");
    }else if(strcmp(script, "cil") == 0){
          system("sudo cp cil /bin");     
          printf("\033[1;34mcil已全局可使用\033[0m\n");
          
    }
    else {
    printf("\033[1;31mCmdUtils的shell功能暂不支持该参数\033[0m\n");
    }

}