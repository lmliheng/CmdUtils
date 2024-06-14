#ifndef PRINT_COLOR_H
#define PRINT_COLOR_H

typedef enum {
    reset = 0,
    red,
    green,
    yellow,
    blue,
    magenta,
    cyan,
    white,
    count // 用于数组大小
} Color;

void color_printf(Color color, const char *format, ...);

#endif // PRINT_COLOR_H