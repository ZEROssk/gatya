#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    clock_t start, end;

    start = clock();

    int kakuritu = 0;
    int kakutei = 0;
    int h[6];
    int haisyutu[6];
    int gosaba = 0, yonsaba = 0, sansaba = 0, goreisou = 0, yonreisou = 0, sanreisou = 0;
    int nameselectgo, nameselectgor, nameselectyon, nameselectyonr, nameselectsan, nameselectsanr;
    h[0] = 1;
    h[1] = 3;
    h[2] = 4;
    h[3] = 12;
    h[4] = 40;
    h[5] = 40;

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
            if (kakuritu <= haisyutu[0])    //星５鯖の排出処理
            {
                printf("┏━━━━━━━━┓\n");
                printf("┃ 星５鯖 ┃ ");
                //25
                nameselectgo = rand() % 25;
                if (nameselectgo == 0)
                {
                    printf(" アルトリア・ペンドラゴン\n");
                }
                if (nameselectgo == 1)
                {
                    printf(" モードレッド\n");
                }
                if (nameselectgo == 2)
                {
                    printf(" アルテラ\n");
                }
                if (nameselectgo == 3)
                {
                    printf(" オリオン\n");
                }
                if (nameselectgo == 4)
                {
                    printf(" ニコラ・テスラ\n");
                }
                if (nameselectgo == 5)
                {
                    printf(" アルジュナ\n");
                }
                if (nameselectgo == 6)
                {
                    printf(" カルナ\n");
                }
                if (nameselectgo == 7)
                {
                    printf(" エルキドゥ\n");
                }
                if (nameselectgo == 8)
                {
                    printf(" アルトリア・ペンドラゴン[ランサー]\n");
                }
                if (nameselectgo == 9)
                {
                    printf(" フランシス・ドレイク\n");
                }
                if (nameselectgo == 10)
                {
                    printf(" オジマンディアス\n");
                }
                if (nameselectgo == 11)
                {
                    printf(" 女王メイヴ\n");
                }
                if (nameselectgo == 12)
                {
                    printf(" ケツァル・コアトル\n");
                }
                if (nameselectgo == 13)
                {
                    printf(" アキレウス\n");
                }
                if (nameselectgo == 14)
                {
                    printf("玉藻の前\n");
                }
                if (nameselectgo == 15)
                {
                    printf(" 諸葛孔明[エルメロイII世]\n");
                }
                if (nameselectgo == 16)
                {
                    printf(" 玄装三蔵\n");
                }
                if (nameselectgo == 17)
                {
                    printf(" 不夜城のキャスター\n");
                }
                if (nameselectgo == 18)
                {
                    printf(" アナスタシア\n");
                }
                if (nameselectgo == 19)
                {
                    printf(" ジャック・ザ・リッパー\n");
                }
                if (nameselectgo == 20)
                {
                    printf(" 刑部姫\n");
                }
                if (nameselectgo == 21)
                {
                    printf(" ヴラド三世\n");
                }
                if (nameselectgo == 22)
                {
                    printf(" ナイチンゲール\n");
                }
                if (nameselectgo == 23)
                {
                    printf(" クー・フーリン[オルタ]\n");
                }
                if (nameselectgo == 24)
                {
                    printf(" ジャンヌ・ダルク\n");
                }
                printf("┗━━━━━━━━┛\n");
                kakutei = kakutei + 1;
                gosaba = gosaba + 1;
            } else if (kakuritu <= haisyutu[1]) {   //星４鯖の排出処理
                printf("  星４鯖");
                //48
                nameselectyon = rand() % 48;
                if (nameselectyon == 0)
                {
                    printf(" アルトリア・ペンドラゴン[オルタ]\n");
                }
                if (nameselectyon == 1)
                {
                    printf(" ネロ・クラウディウス\n");
                }
                if (nameselectyon == 2)
                {
                    printf(" ガウェイン\n");
                }
                if (nameselectyon == 3)
                {
                    printf(" ジークフリート\n");
                }
                if (nameselectyon == 4)
                {
                    printf(" ラーマ\n");
                }
                if (nameselectyon == 5)
                {
                    printf(" ランスロット\n");
                }
                if (nameselectyon == 6)
                {
                    printf(" シュヴァリエ・デオン\n");
                }
                if (nameselectyon == 7)
                {
                    printf(" 鈴鹿御前\n");
                }
                if (nameselectyon == 8)
                {
                    printf(" エミヤ\n");
                }
                if (nameselectyon == 9)
                {
                    printf(" アタランテ\n");
                }
                if (nameselectyon == 10)
                {
                    printf(" トリスタン\n");
                }
                if (nameselectyon == 11)
                {
                    printf(" アーチャー・インフェルノ\n");
                }
                if (nameselectyon == 12)
                {
                    printf(" ケイローン\n");
                }
                if (nameselectyon == 13)
                {
                    printf(" ヴラド三世[EXTRA]\n");
                }
                if (nameselectyon == 14)
                {
                    printf(" エリザベート・バートリー\n");
                }
                if (nameselectyon == 15)
                {
                    printf(" フィン・マックール\n");
                }
                if (nameselectyon == 16)
                {
                    printf(" 李書文\n");
                }
                if (nameselectyon == 17)
                {
                    printf(" アルトリア・ペンドラゴン[オルタ][ランサー]\n");
                }
                if (nameselectyon == 18)
                {
                    printf(" メドゥーサ\n");
                }
                if (nameselectyon == 19)
                {
                    printf(" パールヴァティー\n");
                }
                if (nameselectyon == 20)
                {
                    printf(" 哪吒\n");
                }
                if (nameselectyon == 21)
                {
                    printf(" アストルフォ\n");
                }
                if (nameselectyon == 22)
                {
                    printf(" アン・ボニー＆メアリー・リード\n");
                }
                if (nameselectyon == 23)
                {
                    printf(" マリー・アントワネット\n");
                }
                if (nameselectyon == 24)
                {
                    printf(" マルタ\n");
                }
                if (nameselectyon == 25)
                {
                    printf(" ナーサリー・ライム\n");
                }
                if (nameselectyon == 26)
                {
                    printf(" ニトクリス\n");
                }
                if (nameselectyon == 27)
                {
                    printf(" メディア[リリィ]\n");
                }
                if (nameselectyon == 28)
                {
                    printf(" ギルガメッシュ\n");
                }
                if (nameselectyon == 29)
                {
                    printf(" エレナ・ブラヴァツキー\n");
                }
                if (nameselectyon == 30)
                {
                    printf(" トーマス・エジソン\n");
                }
                if (nameselectyon == 31)
                {
                    printf(" オケアノスのキャスター\n");
                }
                if (nameselectyon == 32)
                {
                    printf(" ステンノ\n");
                }
                if (nameselectyon == 33)
                {
                    printf(" エミヤ[アサシン]\n");
                }
                if (nameselectyon == 34)
                {
                    printf(" カーミラ\n");
                }
                if (nameselectyon == 35)
                {
                    printf(" 新宿のアサシン\n");
                }
                if (nameselectyon == 36)
                {
                    printf(" 不夜城のアサシン\n");
                }
                if (nameselectyon == 37)
                {
                    printf(" アサシン・パライソ\n");
                }
                if (nameselectyon == 38)
                {
                    printf(" ヘラクレス\n");
                }
                if (nameselectyon == 39)
                {
                    printf(" ランスロット\n");
                }
                if (nameselectyon == 40)
                {
                    printf(" フランケンシュタイン\n");
                }
                if (nameselectyon == 41)
                {
                    printf(" ベオウルフ\n");
                }
                if (nameselectyon == 42)
                {
                    printf(" タマモキャット\n");
                }
                if (nameselectyon == 43)
                {
                    printf(" 茨木童子\n");
                }
                if (nameselectyon == 44)
                {
                    printf(" エルドラドのバーサーカー\n");
                }
                if (nameselectyon == 45)
                {
                    printf(" アタランテ[オルタ]\n");
                }
                if (nameselectyon == 46)
                {
                    printf(" ゴルゴーン\n");
                }
                if (nameselectyon == 47)
                {
                    printf(" 新宿のアヴェンジャー\n");
                }
                kakutei = kakutei + 1;
                yonsaba = yonsaba + 1;
            } else if (kakuritu <= haisyutu[2]) {   //星５礼装の排出処理
                printf("┏━━━━━━━━━━┓\n");
                printf("┃ 星５礼装 ┃");
                //18
                nameselectgor = rand() % 18;
                if (nameselectgor == 0)
                {
                    printf(" フォーマルクラフト\n");
                }
                if (nameselectgor == 1)
                {
                    printf(" イマジナリ・アラウンド\n");
                }
                if (nameselectgor == 2)
                {
                    printf(" リミテッド・ゼロオーバー\n");
                }
                if (nameselectgor == 3)
                {
                    printf(" カレイドスコープ\n");
                }
                if (nameselectgor == 4)
                {
                    printf(" ヘブンズフィール\n");
                }
                if (nameselectgor == 5)
                {
                    printf(" プリズマコスモス\n");
                }
                if (nameselectgor == 6)
                {
                    printf(" 黒の聖杯\n");
                }
                if (nameselectgor == 7)
                {
                    printf(" 月の勝利者\n");
                }
                if (nameselectgor == 8)
                {
                    printf(" もう一つの結末\n");
                }
                if (nameselectgor == 9)
                {
                    printf(" 2030年の欠片\n");
                }
                if (nameselectgor == 10)
                {
                    printf(" 五百年の妄執\n");
                }
                if (nameselectgor == 11)
                {
                    printf(" 聖者の依り代\n");
                }
                if (nameselectgor == 12)
                {
                    printf(" 理想の王聖\n");
                }
                if (nameselectgor == 13)
                {
                    printf(" 月霊髄液\n");
                }
                if (nameselectgor == 14)
                {
                    printf(" 目醒め前\n");
                }
                if (nameselectgor == 15)
                {
                    printf(" 起源弾\n");
                }
                if (nameselectgor == 16)
                {
                    printf(" 魔性菩薩\n");
                }
                if (nameselectgor == 17)
                {
                    printf(" 陽だまりの中で\n");
                }
                printf("┗━━━━━━━━━━┛\n");
                kakutei = kakutei + 1;
                goreisou = goreisou + 1;
            } else if (kakuritu <= haisyutu[3]) {   //星４礼装排出処理
                printf("  星４礼装　");
                //26
                nameselectyonr = rand() % 26;
                if (nameselectyonr == 0)
                {
                    printf(" 鋼の鍛錬\n");
                }
                if (nameselectyonr == 1)
                {
                    printf(" 原始呪術\n");
                }
                if (nameselectyonr == 2)
                {
                    printf(" 投影魔術\n");
                }
                if (nameselectyonr == 3)
                {
                    printf(" ガンド\n");
                }
                if (nameselectyonr == 4)
                {
                    printf(" 緑の破音\n");
                }
                if (nameselectyonr == 5)
                {
                    printf(" 宝石魔術・対影\n");
                }
                if (nameselectyonr == 6)
                {
                    printf(" 優雅たれ\n");
                }
                if (nameselectyonr == 7)
                {
                    printf(" 虚数魔術\n");
                }
                if (nameselectyonr == 8)
                {
                    printf(" 天の晩餐\n");
                }
                if (nameselectyonr == 9)
                {
                    printf(" 天使の詩\n");
                }
                if (nameselectyonr == 10)
                {
                    printf(" 封印指定　執行者\n");
                }
                if (nameselectyonr == 11)
                {
                    printf(" マグダラの聖骸市\n");
                }
                if (nameselectyonr == 12)
                {
                    printf(" 一の太刀\n");
                }
                if (nameselectyonr == 13)
                {
                    printf(" コードキャスト\n");
                }
                if (nameselectyonr == 14)
                {
                    printf(" 騎士の矜持\n");
                }
                if (nameselectyonr == 15)
                {
                    printf(" 死霊魔術\n");
                }
                if (nameselectyonr == 16)
                {
                    printf(" 目覚めた意思\n");
                }
                if (nameselectyonr == 17)
                {
                    printf(" 千年黄金樹\n");
                }
                if (nameselectyonr == 18)
                {
                    printf(" レコードホルダー\n");
                }
                if (nameselectyonr == 19)
                {
                    printf(" 毒蛇一芸\n");
                }
                if (nameselectyonr == 20)
                {
                    printf(" 死の芸術\n");
                }
                if (nameselectyonr == 21)
                {
                    printf(" 柔らかな慈愛\n");
                }
                if (nameselectyonr == 22)
                {
                    printf(" 恋知らぬ令嬢\n");
                }
                if (nameselectyonr == 23)
                {
                    printf(" 援護射撃\n");
                }
                if (nameselectyonr == 24)
                {
                    printf(" ルームガーダー\n");
                }
                if (nameselectyonr == 25)
                {
                    printf(" 最後の語り部\n");
                }
                kakutei = kakutei + 1;
                yonreisou = yonreisou + 1;
            } else if (kakuritu <= haisyutu[4]) {   //星３鯖排出処理
                printf("  星３鯖　　");
                //37
                nameselectsan = rand() % 37;
                if (nameselectsan == 0)
                {
                    printf(" ベディヴィエール\n");
                }
                if (nameselectsan == 1)
                {
                    printf(" ガイウス・ユリウス・カエサル\n");
                }
                if (nameselectsan == 2)
                {
                    printf(" フェルグス・マック・ロイ\n");
                }
                if (nameselectsan == 3)
                {
                    printf(" ジル・ド・レェ\n");
                }
                if (nameselectsan == 4)
                {
                    printf(" ロビンフッド\n");
                }
                if (nameselectsan == 5)
                {
                    printf(" ダビデ\n");
                }
                if (nameselectsan == 6)
                {
                    printf(" ビリー・ザ・キッド\n");
                }
                if (nameselectsan == 7)
                {
                    printf(" エウリュアレ\n");
                }
                if (nameselectsan == 8)
                {
                    printf(" 俵藤太\n");
                }
                if (nameselectsan == 9)
                {
                    printf(" 子ギル\n");
                }
                if (nameselectsan == 10)
                {
                    printf(" クー・フーリン\n");
                }
                if (nameselectsan == 11)
                {
                    printf(" ディルムッド・オディナ\n");
                }
                if (nameselectsan == 12)
                {
                    printf(" クー・フーリン[プロトタイプ]\n");
                }
                if (nameselectsan == 13)
                {
                    printf(" ロムルス\n");
                }
                if (nameselectsan == 14)
                {
                    printf(" 宝蔵院胤舜\n");
                }
                if (nameselectsan == 15)
                {
                    printf(" ヘクトール\n");
                }
                if (nameselectsan == 16)
                {
                    printf(" ジャガーマン\n");
                }
                if (nameselectsan == 17)
                {
                    printf(" メドゥーサ\n");
                }
                if (nameselectsan == 18)
                {
                    printf(" ブーディカ\n");
                }
                if (nameselectsan == 19)
                {
                    printf(" 牛若丸\n");
                }
                if (nameselectsan == 20)
                {
                    printf(" アレキサンダー\n");
                }
                if (nameselectsan == 21)
                {
                    printf(" メディア\n");
                }
                if (nameselectsan == 22)
                {
                    printf(" ジル・ド・レェ\n");
                }
                if (nameselectsan == 23)
                {
                    printf(" ヴァン・ホーエンハイム・パラケルスス\n");
                }
                if (nameselectsan == 24)
                {
                    printf(" チャールズ・バベッジ\n");
                }
                if (nameselectsan == 25)
                {
                    printf(" メフィストフェレス\n");
                }
                if (nameselectsan == 26)
                {
                    printf(" ジェロニモ\n");
                }
                if (nameselectsan == 27)
                {
                    printf(" クー・フーリン[キャスター]\n");
                }
                if (nameselectsan == 28)
                {
                    printf(" アヴィケブロン\n");
                }
                if (nameselectsan == 29)
                {
                    printf(" 百貌のハサン\n");
                }
                if (nameselectsan == 30)
                {
                    printf(" ヘンリー・ジキル＆ハイド\n");
                }
                if (nameselectsan == 31)
                {
                    printf(" 静謐のハサン\n");
                }
                if (nameselectsan == 32)
                {
                    printf(" 荊軻\n");
                }
                if (nameselectsan == 33)
                {
                    printf(" 風魔小太郎\n");
                }
                if (nameselectsan == 34)
                {
                    printf(" 呂布奉先\n");
                }
                if (nameselectsan == 35)
                {
                    printf(" ダレイオス三世\n");
                }
                if (nameselectsan == 36)
                {
                    printf(" 清姫\n");
                }
                kakutei = kakutei + 1;
                sansaba = sansaba + 1;
            } else if (kakuritu <= haisyutu[5]) {   //星３礼装排出処理
                printf("  星３礼装　");
                //22
                nameselectsanr = rand() % 22;
                if (nameselectsanr == 0)
                {
                    printf(" 柳洞寺\n");
                }
                if (nameselectsanr == 1)
                {
                    printf(" 愛の霊薬\n");
                }
                if (nameselectsanr == 2)
                {
                    printf(" ブロンズ・マニピュレーター\n");
                }
                if (nameselectsanr == 3)
                {
                    printf(" アトゴウラ\n");
                }
                if (nameselectsanr == 4)
                {
                    printf(" ヒュドラー・ダガー\n");
                }
                if (nameselectsanr == 5)
                {
                    printf(" 過ぎ去りし夢\n");
                }
                if (nameselectsanr == 6)
                {
                    printf(" 激辛麻婆豆腐\n");
                }
                if (nameselectsanr == 7)
                {
                    printf(" 宝石剣ゼルレッチ\n");
                }
                if (nameselectsanr == 8)
                {
                    printf(" カムランの戦い\n");
                }
                if (nameselectsanr == 9)
                {
                    printf(" フラガラック\n");
                }
                if (nameselectsanr == 10)
                {
                    printf(" 天の逆月\n");
                }
                if (nameselectsanr == 11)
                {
                    printf(" 固有結界\n");
                }
                if (nameselectsanr == 12)
                {
                    printf(" 若返りの霊薬\n");
                }
                if (nameselectsanr == 13)
                {
                    printf(" 謎の仮面群\n");
                }
                if (nameselectsanr == 14)
                {
                    printf(" フリーランサー\n");
                }
                if (nameselectsanr == 15)
                {
                    printf(" 瓦礫の聖堂\n");
                }
                if (nameselectsanr == 16)
                {
                    printf(" まるごしシンジ君\n");
                }
                if (nameselectsanr == 17)
                {
                    printf(" アトラス院\n");
                }
                if (nameselectsanr == 18)
                {
                    printf(" 幻想種\n");
                }
                if (nameselectsanr == 19)
                {
                    printf(" 神造兵装\n");
                }
                if (nameselectsanr == 20)
                {
                    printf(" 魂喰い\n");
                }
                if (nameselectsanr == 21)
                {
                    printf(" 叡智の光\n");
                }
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