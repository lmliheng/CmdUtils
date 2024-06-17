#include "../../includes/updata_utils.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void updata_scripts(const char *script){
    if (strcmp(script, "updata") == 0){
          system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/cil");
          system("chmod +x cil");
          system("sudo cp cil /bin");     
          printf("\033[1;34mcil已全局可使用\033[0m\n");
          system("rm -f cil");
          system("cil");
          printf("\033[1;34mcil更新完成!\033[0m\n");
    }
}