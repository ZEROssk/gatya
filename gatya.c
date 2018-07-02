#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    double probability = 0.5;   // 確率1％
    srand((unsigned)time(NULL)); // 乱数の初期化

    if ((double)rand() / RAND_MAX < probability)
    {
        printf("(๑╹ω╹๑ )\n");
    }
    return 0;
}