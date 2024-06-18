#include "../../includes/updata_utils.h"
#include "PrintColor.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void updata_scripts(const char *script){
    if (strcmp(script, "updata") == 0){
          system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/cil");
          system("chmod +x cil");
          system("sudo cp cil /bin");     
          color_printf(cyan,"cil已全局可使用\n");
          system("rm -f cil");
          color_printf(cyan,"cil更新完成!\n");
    }
}