#include "../../includes/shell_utils.h"
#include<stdio.h>
#include<string.h>
void shell_scripts(const char *script){
    if (strcmp(script, "env") == 0){
          system("env");
    }
    
    else {
    printf("\033[1;31mCmdUtils的shell功能暂不支持该参数\033[0m\n");
    }

}