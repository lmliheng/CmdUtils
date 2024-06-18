#include "../../includes/Version.h"


#include<stdio.h>
#include<string.h>


void print_version(const char *script){
    if (strcmp(script, "version") == 0){


        char version[] = "3.0.1";

    // 使用printf函数打印版本号
        printf("当前版本是: %s\n", version);

    }

}