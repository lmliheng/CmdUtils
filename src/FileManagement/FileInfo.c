// 新增功能：遍历该目录下文件以及文件夹内存大小等检查功能

#include "../../includes/FileInfo.h"

#include "PrintColor.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void PrintFileInfo(const char *script){
    if (strcmp(script, "exam") == 0){
          system("ls -lh --color=auto");
          color_printf(cyan,"目录下文件目录检查结束\n");              
    }else if(strcmp(script,"nginx") == 0){
          color_printf(cyan,"Nginx安装检查:\n");           
          system("find / -name \"nginx.conf\"");
    }else if(strcmp(script,"psql") == 0){
          color_printf(cyan,"PostgreSQL安装检查:\n");           
          system("find / -name \"postgresql.conf\"");
    }else if(strcmp(script,"info") == 0){
        system("ls -lh --color=auto --full-time -R");
    }
    else {
          color_printf(red,"CmdUtils的文件功能暂不支持该参数\n");           
    }

}