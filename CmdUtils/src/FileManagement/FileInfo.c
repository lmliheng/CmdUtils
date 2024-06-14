// 新增功能：遍历该目录下文件以及文件夹内存大小等检查功能

#include "../../includes/FileInfo.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void PrintFileInfo(const char *script){
    if (strcmp(script, "size") == 0){
          system("ls -lh");
          printf("\033[1;34m目录下文件内存检查结束\033[0m\n");
    }else if(strcmp(script,"nginx") == 0){
        printf("\033[1;34mNginx安装检查:\033[0m\n");
        system("find / -name \"nginx.conf\"");
    }
    else {
    printf("\033[1;31mCmdUtils的文件功能暂不支持该参数\033[0m\n");
    }

}