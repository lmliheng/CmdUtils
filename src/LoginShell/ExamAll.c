#include "../../includes/ExamAll.h"

#include "PrintColor.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void login_scripts(const char *script){
    if (strcmp(script, "exam") == 0){
          system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/systeminfo.sh && cp systeminfo.sh /etc/profile.d/ && chmod +x /etc/profile.d/systeminfo.sh");
          printf("\033[1;34m成功设置登录自动检查系统信息,可自行扩展脚本\033[0m\n");
    }
    else {
        color_printf(cyan,"CmdUtils的登录自动化执行功能暂不支持该参数\n");          
    }

}