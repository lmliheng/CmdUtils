// 手写库改写printf
#include "../../includes/PrintColor.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

// ANSI 转义序列前缀
#define ANSI_ESCAPE "\033["



// 颜色代码数组
const char *color_codes[] = {
    [reset] = ANSI_ESCAPE "0m",
    [red] = ANSI_ESCAPE "31m",
    [green] = ANSI_ESCAPE "32m",
    [yellow] = ANSI_ESCAPE "33m",
    [blue] = ANSI_ESCAPE "34m",
    [magenta] = ANSI_ESCAPE "35m",
    [cyan] = ANSI_ESCAPE "36m",
    [white] = ANSI_ESCAPE "37m"
};

// 带颜色支持的简化版printf函数
void color_printf(Color color, const char *format, ...) {
    // 输出颜色代码
    printf("%s", color_codes[color]);

    // 使用va_list处理可变参数
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);

    // 重置颜色
    printf("%s", color_codes[reset]);
}


/*
 *int main() {
 *   // 使用colored_printf函数输出不同颜色的文本
 *   color_printf(red, "这是红色文本。\n");
 *   color_printf(green, "这是绿色文本。\n");
 *   color_printf(yellow, "这是黄色文本。\n");
 *   color_printf(blue, "这是蓝色文本。\n");
 *   color_printf(magenta, "这是洋红色文本。\n");
 *   color_printf(cyan, "这是青色文本。\n");
 *   color_printf(white, "这是白色文本。\n");
 *
 *   return 0;
 *}
 */