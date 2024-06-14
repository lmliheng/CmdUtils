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
    }        
    
    else {
    printf("\033[1;31mCmdUtils的shell功能暂不支持该参数\033[0m\n");
    }

}