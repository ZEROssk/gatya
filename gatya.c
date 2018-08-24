#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "data.h"

const char* GetServantName (eRANK_TYPE rank)
{
    return strServantNames[rank];
}

int main(void)
{
    clock_t start, end;
    start = clock();

    int probability = 0,confirm = 0;
    int h[] = {
        1,
        3,
        4,
        12,
        40,
        40,
    };
    int haisyutu[6];
    int sabafive = 0, sabafor = 0, sabathree = 0;
    int fiveblacktie = 0, forblacktie = 0, threeblacktie = 0;
    eRANK_TYPE nameselectfive, nameselectfor, nameselectthree, nameselectfiver, nameselectforr, nameselectthreer;

    srand(time(NULL));

    haisyutu[0] = h[0];

    for (int x = 1; x < 6; x++)
    {
        haisyutu[x] = haisyutu[x - 1] + h[x];
    }

    while (confirm == 0)
    {
        printf("\n10連ガチャ\n");
        for (int i = 0; i < 10; i++)
        {
            probability = rand() % 100;
            if (probability <= haisyutu[0]) //星５鯖の排出処理
            {
                printf("┏━━━━━━━━┓\n");
                printf("┃ 星５鯖 ┃ ");
                nameselectfive = rand() % 25; //星５鯖の個別選択
                printf(" %s\n", GetServantName(nameselectfive));
                printf("┗━━━━━━━━┛\n");
                confirm = confirm + 1;
                sabafive = sabafive + 1;
            }
            else if (probability <= haisyutu[1]) //星４鯖の排出処理
            {
                printf("  星４鯖　　");
                nameselectfor = rand() % 48; //星４鯖の個別選択
                printf(" %s\n", GetServantName(nameselectfor));
                confirm = confirm + 1;
                sabafor = sabafor + 1;
            }
            else if (probability <= haisyutu[2]) //星５礼装の排出処理
            {
                printf("┏━━━━━━━━━━┓\n");
                printf("┃ 星５礼装 ┃");
                nameselectfiver = rand() % 18; //星５礼装の個別選択
                printf(" %s\n", GetServantName(nameselectfiver));
                printf("┗━━━━━━━━━━┛\n");
                confirm = confirm + 1;
                fiveblacktie = fiveblacktie + 1;
            }
            else if (probability <= haisyutu[3]) //星４礼装排出処理
            {
                printf("  星４礼装　");
                nameselectforr = rand() % 26; //星４礼装の個別選択
                printf(" %s\n", GetServantName(nameselectforr));
                confirm = confirm + 1;
                forblacktie = forblacktie + 1;
            }
            else if (probability <= haisyutu[4]) //星３鯖排出処理
            {
                printf("  星３鯖　　");
                nameselectthree = rand() % 37; //星３鯖の個別選択
                printf(" %s\n", GetServantName(nameselectthree));
                confirm = confirm + 1;
                sabathree = sabathree + 1;
            }
            else if (probability <= haisyutu[5]) //星３礼装排出処理
            {
                printf("  星３礼装　");
                nameselectthreer = rand() % 22; //星３礼装の個別選択
                printf(" %s\n", GetServantName(nameselectthreer));
                threeblacktie = threeblacktie + 1;
            }
        }
    }

    /*  ガチャ結果を種類ごとに枚数表示  */
    printf("\n┏ ガチャ結果━━━┓\n");
    printf("┃ 星５鯖　　%d枚┃\n", sabafive);
    printf("┃ 星４鯖　　%d枚┃\n", sabafor);
    printf("┃ 星３鯖　　%d枚┃\n", sabathree);
    printf("┃ 星５礼装　%d枚┃\n", fiveblacktie);
    printf("┃ 星４礼装　%d枚┃\n", forblacktie);
    printf("┃ 星３礼装　%d枚┃\n", threeblacktie);
    printf("┗━━━━━━━━━━━━━━┛");

    end = clock();
    printf("\n処理時間%lu[ms]\n", end - start);

    return 0;
}