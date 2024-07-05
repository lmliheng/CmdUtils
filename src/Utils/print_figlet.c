#include "../../includes/print_figlet.h"
#include "PrintColor.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_figlet(const char *script){
    if (strcmp(script, "cmdutils") == 0){
          

         // system("wget -P relative \"https://heng1.oss-cn-beijing.aliyuncs.com/figlet\"")
         

          system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/slant.flf --silent");

          system("mkdir -p font && cp slant.flf font");

          system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/figlet --silent && chmod +x figlet && ./figlet -f font/slant.flf CmdUtils");

          system("rm -f slant.flf");

                  
    }else if(strcmp(script, "banner") == 0){
          system("");
    }
    else {
          color_printf(red,"CmdUtils的figlet功能暂不支持该参数\n"); 
    }

}