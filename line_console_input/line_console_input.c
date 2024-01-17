#include <stdio.h>
#include <string.h>

int main(void) {
    char line_str[16];

    printf("%lu文字を入力してください。\n", sizeof(line_str)-1);
    fgets(line_str, sizeof(line_str), stdin);
    puts(line_str);

    return 0;
}