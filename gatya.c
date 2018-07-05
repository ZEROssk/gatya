#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    clock_t start, end;

    int kakuritu = 0;
    int kakutei = 0;
    int h[6];
    int haisyutu[6];
    int gosaba = 0, yonsaba = 0, sansaba = 0;
    int goreisou = 0, yonreisou = 0, sanreisou = 0;

    h[0] = 1;
    h[1] = 3;
    h[2] = 4;
    h[3] = 12;
    h[4] = 40;
    h[5] = 40;

    srand(time(NULL));

    start = clock();

    haisyutu[0] = h[0];

    for (int x = 1; x < 6; x++)
    {
        haisyutu[x] = haisyutu[x - 1] + h[x];
    }

    while (kakutei == 0)
    {
        printf("\n10連ガチャ\n");
        for (int i = 0; i < 10; i++)
        {
            kakuritu = rand() % 100;
            if (kakuritu <= haisyutu[0]) {
                printf("┏━━━━━━━━┓\n");
                printf("┃ 星５鯖 ┃\n");
                printf("┗━━━━━━━━┛\n");
                kakutei = kakutei + 1;
                gosaba = gosaba + 1;
            } else if (kakuritu <= haisyutu[1]) {
                printf("  星４鯖\n");
                kakutei = kakutei + 1;
                yonsaba = yonsaba + 1;
            } else if (kakuritu <= haisyutu[2]) {
                printf("┏━━━━━━━━━━┓\n");
                printf("┃ 星５礼装 ┃\n");
                printf("┗━━━━━━━━━━┛\n");
                kakutei = kakutei + 1;
                goreisou = goreisou + 1;
            } else if (kakuritu <= haisyutu[3]) {
                printf("  星４礼装\n");
                kakutei = kakutei + 1;
                yonreisou = yonreisou + 1;
            } else if (kakuritu <= haisyutu[4]) {
                printf("  星３鯖\n");
                kakutei = kakutei + 1;
                sansaba = sansaba + 1;
            } else if (kakuritu <= haisyutu[5]) {
                printf("  星３礼装\n");
                sanreisou = sanreisou + 1;
            }
        }
    }

    printf("\n┏ ガチャ結果━━━┓\n");
    printf("┃ 星５鯖　　%d枚┃\n", gosaba);
    printf("┃ 星４鯖　　%d枚┃\n", yonsaba);
    printf("┃ 星３鯖　　%d枚┃\n", sansaba);
    printf("┃ 星５礼装　%d枚┃\n", goreisou);
    printf("┃ 星４礼装　%d枚┃\n", yonreisou);
    printf("┃ 星３礼装　%d枚┃\n", sanreisou);
    printf("┗━━━━━━━━━━━━━━┛");

    end = clock();
    printf("\n処理時間%lu[ms]\n", end - start);

    return 0;
}