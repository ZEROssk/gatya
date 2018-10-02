#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "data.h"

const char* GetServantName (eRANK_TYPE rank)
{
    return strServantNames[rank];
}

int GetRandom(int, int);

int main(void)
{
    clock_t start, end;
    start = clock();

    int probability = 0,confirm = 0,confirms = 0;
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

    system("clear");

    haisyutu[0] = h[0];

    for (int x = 1; x < 6; x++)
    {
        haisyutu[x] = haisyutu[x - 1] + h[x];
    }

    while (confirm == 0 && confirms == 0)
    {
        printf("\n10連ガチャ\n");
        printf("\n");
        for (int i = 0; i < 10; i++)
        {
            probability = rand() % 100;
            if (probability <= haisyutu[0]) //星５鯖の排出処理
            {
                nameselectfive = rand() % 25; //星５鯖の個別選択 0~25
                printf("┏━━━━━━━━┓\n");
                printf("┃ 星５鯖 ┃  %s\n", GetServantName(nameselectfive));
                printf("┗━━━━━━━━┛\n");
                confirms = confirms + 1;
                confirm = confirm + 1;
                sabafive = sabafive + 1;
            }
            else if (probability <= haisyutu[1]) //星４鯖の排出処理
            {
                int min = 25,max = 72;
                nameselectfor = GetRandom(min, max); //星４鯖の個別選択 25~73
                printf("  星４鯖　　 %s\n", GetServantName(nameselectfor));
                confirms = confirms + 1;
                confirm = confirm + 1;
                sabafor = sabafor + 1;
            }
            else if (probability <= haisyutu[2]) //星５礼装の排出処理
            {
                int min = 110, max = 127;
                nameselectfiver = GetRandom(min, max); //星５礼装の個別選択 111~129
                printf("┏━━━━━━━━━━┓\n");
                printf("┃ 星５礼装 ┃ %s\n", GetServantName(nameselectfiver));
                printf("┗━━━━━━━━━━┛\n");
                confirm = confirm + 1;
                fiveblacktie = fiveblacktie + 1;
            }
            else if (probability <= haisyutu[3]) //星４礼装排出処理
            {
                int min = 128, max = 153;
                nameselectforr = GetRandom(min, max); //星４礼装の個別選択 129~155
                printf("  星４礼装　 %s\n", GetServantName(nameselectforr));
                confirm = confirm + 1;
                forblacktie = forblacktie + 1;
            }
            else if (probability <= haisyutu[4]) //星３鯖排出処理
            {
                int min = 73,max = 109;
                nameselectthree = GetRandom(min, max); //星３鯖の個別選択 74~110
                printf("  星３鯖　　 %s\n", GetServantName(nameselectthree));
                confirms = confirms + 1;
                sabathree = sabathree + 1;
            }
            else if (probability <= haisyutu[5]) //星３礼装排出処理
            {
                int min = 154, max = 175;
                nameselectthreer = GetRandom(min, max); //星３礼装の個別選択 155~177
                printf("  星３礼装　 %s\n", GetServantName(nameselectthreer));
                threeblacktie = threeblacktie + 1;
            }
        }
    }

    /*  ガチャ結果を種類ごとに枚数表示  */
    printf("\n┏ ガチャ結果━━━━━━━━━━━━━━━━━┓\n");
    printf("┃ 星５鯖　%d枚  星５礼装　%d枚 ┃\n", sabafive, fiveblacktie);
    printf("┃ 星４鯖　%d枚  星４礼装　%d枚 ┃\n", sabafor, forblacktie);
    printf("┃ 星３鯖　%d枚  星３礼装　%d枚 ┃\n", sabathree, threeblacktie);
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

    end = clock();
    printf("\n処理時間%lu[ms]\n", end - start);

    return 0;
}

int GetRandom(int min, int max)
{
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}