#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;

    srand((unsigned int)time(NULL));

    printf("0〜1の浮動小数点乱数の生成\n");
    for (i = 0; i < 10; i++) {
        // 0〜1の浮動小数点乱数の生成
        printf("%.2f\n", rand() / (double)RAND_MAX);
    }

    printf("\n");
    printf("-1〜1の整数乱数の生成\n");
    for (i = 0; i < 10; i++) {
        // 最小値:-1〜1 取得個数:3個
        printf("%d\n", rand() % 3 - 1);
    }

    printf("\n");
    printf("0.1〜1の小数乱数の生成\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", 0.1f + ((float)rand() / (float)(RAND_MAX / 0.9f)) );
    }

    return 0;
}