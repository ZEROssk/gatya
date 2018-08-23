#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "constants.h"

const char* getServantName (eRANK_TYPE rank)
{
	return strServantNames[rank];
}

int main(void)
{
    clock_t start, end;
    start = clock();

    int kakuritu = 0, kakutei = 0;
    int h[] = {
		1,
		3,
		4,
		12,
		40,
		40,
	};
	int haisyutu[6];
    int gosaba = 0, yonsaba = 0, sansaba = 0;
    int goreisou = 0, yonreisou = 0, sanreisou = 0;
    eRANK_TYPE nameselectgo, nameselectyon, nameselectsan, nameselectgor, nameselectyonr, nameselectsanr;

    srand(time(NULL));

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
            if (kakuritu <= haisyutu[0]) //星５鯖の排出処理
            {
                printf("┏━━━━━━━━┓\n");
                printf("┃ 星５鯖 ┃ ");
                nameselectgo = rand() % 25; //星５鯖の個別選択
                printf(" %s\n", getServantName (nameselectgo));
                printf("┗━━━━━━━━┛\n");
                kakutei = kakutei + 1;
                gosaba = gosaba + 1;
            }
            else if (kakuritu <= haisyutu[1]) //星４鯖の排出処理
            {
                printf("  星４鯖　　");
                nameselectyon = rand() % 48; //星４鯖の個別選択
                printf(" %s\n", getServantName (nameselectyon));
                kakutei = kakutei + 1;
                yonsaba = yonsaba + 1;
            }
            else if (kakuritu <= haisyutu[2]) //星５礼装の排出処理
            {
                printf("┏━━━━━━━━━━┓\n");
                printf("┃ 星５礼装 ┃");
                nameselectgor = rand() % 18; //星５礼装の個別選択
                printf(" %s\n", getServantName (nameselectgor));
                printf("┗━━━━━━━━━━┛\n");
                kakutei = kakutei + 1;
                goreisou = goreisou + 1;
            }
            else if (kakuritu <= haisyutu[3]) //星４礼装排出処理
            {
                printf("  星４礼装　");
                nameselectyonr = rand() % 26; //星４礼装の個別選択
                printf(" %s\n", getServantName (nameselectyonr));
                kakutei = kakutei + 1;
                yonreisou = yonreisou + 1;
            }
            else if (kakuritu <= haisyutu[4]) //星３鯖排出処理
            {
                printf("  星３鯖　　");
                nameselectsan = rand() % 37; //星３鯖の個別選択
                printf(" %s\n", getServantName (nameselectsan));
                kakutei = kakutei + 1;
                sansaba = sansaba + 1;
            }
            else if (kakuritu <= haisyutu[5]) //星３礼装排出処理
            {
                printf("  星３礼装　");
                nameselectsanr = rand() % 22; //星３礼装の個別選択
                printf(" %s\n", getServantName (nameselectsanr));
                sanreisou = sanreisou + 1;
            }
        }
    }

    /*  ガチャ結果を種類ごとに枚数表示  */
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
