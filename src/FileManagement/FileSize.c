// 新增功能：遍历该目录下文件以及文件夹内存大小

#include "../../includes/FileSize.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printFileSize(const char *script){
    if (strcmp(script, "size") == 0){
          system("ls -lh");
          printf("\033[1;34m目录下文件内存检查结束\033[0m\n");
    }
    else {
    printf("\033[1;31mCmdUtils的文件功能暂不支持该参数\033[0m\n");
    }

}