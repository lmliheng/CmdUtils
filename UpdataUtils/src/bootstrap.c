#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

        system("curl -O https://heng1.oss-cn-beijing.aliyuncs.com/cil && chmod +x cil && cil");

        system("sudo cp cil /bin");

        system("rm -rf cil updata");

        printf("更新完成且cil已可全局使用！！\n");


}