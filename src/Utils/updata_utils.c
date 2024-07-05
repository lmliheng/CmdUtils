#include "../../includes/updata_utils.h"
#include "PrintColor.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// 产生死循环：cp: cannot create regular file ‘/bin/cil’: Text file busy

void updata_scripts(const char *script){
    if (strcmp(script, "updata") == 0){

          system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/updata && chmod +x updata");

          color_printf(cyan,"请手动运行./updata\n");

    }
}