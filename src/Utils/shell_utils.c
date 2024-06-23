#include "../../includes/shell_utils.h"
#include "PrintColor.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void shell_scripts(const char *script){
    if (strcmp(script, "env") == 0){
          system("env");
    }else if(strcmp(script, "banner") == 0){
          system("");
    }else if(strcmp(script, "exam") == 0){
          system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/systeminfo.sh && cp systeminfo.sh /etc/profile.d/ && chmod +x /etc/profile.d/systeminfo.sh");
          system("rm -f systeminfo.sh");
    }else if(strcmp(script, "cpu") == 0){
          system("lscpu");
    }else if(strcmp(script, "free") == 0){
          system("free -h");
    }else if(strcmp(script, "system") == 0){
          system("uname -a");
    }else if(strcmp(script, "cil") == 0){
          system("sudo cp cil /bin");
          system("rm -f cil");    
          color_printf(cyan,"cil已全局可使用\n");          
    }
    else {
          color_printf(red,"CmdUtils的shell功能暂不支持该参数\n"); 
    }

}