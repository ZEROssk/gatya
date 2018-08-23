#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//星５鯖
typedef enum {
    //25
    eRANK_FIVE_SERVANT_BEGIN = 0,
    eRANK_FIVE_SERVANT_AltriaPendragon = eRANK_FIVE_SERVANT_BEGIN,
    eRANK_FIVE_SERVANT_ModeRed,
    eRANK_FIVE_SERVANT_Altera,
    eRANK_FIVE_SERVANT_Orion,
    eRANK_FIVE_SERVANT_NicolaTesla,
    eRANK_FIVE_SERVANT_Arjuna,
    eRANK_FIVE_SERVANT_Carna,
    eRANK_FIVE_SERVANT_Elkidoo,
    eRANK_FIVE_SERVANT_AltriaPendragon_Lancer,
    eRANK_FIVE_SERVANT_FrancisDrake,
    eRANK_FIVE_SERVANT_OjimanDiaz,
    eRANK_FIVE_SERVANT_Move,
    eRANK_FIVE_SERVANT_QuetzalCoulter,
    eRANK_FIVE_SERVANT_Achilles,
    eRANK_FIVE_SERVANT_Tamamo,
    eRANK_FIVE_SERVANT_Elmeroy,
    eRANK_FIVE_SERVANT_Sanzo,
    eRANK_FIVE_SERVANT_Castors_of_the_nighttime_castle,
    eRANK_FIVE_SERVANT_Anastacia,
    eRANK_FIVE_SERVANT_Jack_the_Ripper,
    eRANK_FIVE_SERVANT_Osakabe,
    eRANK_FIVE_SERVANT_Vlado,
    eRANK_FIVE_SERVANT_Nightingale,
    eRANK_FIVE_SERVANT_KooFulinOruta,
    eRANK_FIVE_SERVANT_Jeanne_dArc,
    eRANK_FIVE_SERVANT_END,

    eRANK_FIVE_SERVANT_MAX = eRANK_FIVE_SERVANT_END,
} eRANK_FIVE_SERVANT;

const char* RankfiveServantNames [eRANK_FIVE_SERVANT_MAX] = {
    //25
    "アルトリア・ペンドラゴン",
    "モードレッド",
    "アルテラ",
    "オリオン"
    "ニコラ・テスラ",
    "アルジュナ",
    "カルナ",
    "エルキドゥ",
    "アルトリア・ペンドラゴン[ランサー]",
    "フランシス・ドレイク",
    "オジマンディアス",
    "女王メイヴ",
    "ケツァル・コアトル",
    "アキレウス",
    "玉藻の前",
    "諸葛孔明[エルメロイII世]",
    "玄装三蔵",
    "不夜城のキャスター",
    "アナスタシア",
    "ジャック・ザ・リッパー",
    "刑部姫",
    "ヴラド三世",
    "ナイチンゲール",
    "クー・フーリン[オルタ]",
    "ジャンヌ・ダルク",
};

//星４鯖
typedef enum {
    //48
    eRANK_FOR_SERVANT_BEGIN = 0,
    eRANK_FOR_SERVANT_AltriaPendragonOruta = eRANK_FOR_SERVANT_BEGIN,
    eRANK_FOR_SERVANT_Nro,
    eRANK_FOR_SERVANT_Gawein,
    eRANK_FOR_SERVANT_Ziiku,
    eRANK_FOR_SERVANT_Rarma,
    eRANK_FOR_SERVANT_Ransrot,
    eRANK_FOR_SERVANT_Syubarie,
    eRANK_FOR_SERVANT_Suzuka,
    eRANK_FOR_SERVANT_Emiya,
    eRANK_FOR_SERVANT_Atarante,
    eRANK_FOR_SERVANT_Toristan,
    eRANK_FOR_SERVANT_Artyarinferno,
    eRANK_FOR_SERVANT_Keirorn,
    eRANK_FOR_SERVANT_Vurad,
    eRANK_FOR_SERVANT_Erizabeet,
    eRANK_FOR_SERVANT_Fin,
    eRANK_FOR_SERVANT_Risyobun,
    eRANK_FOR_SERVANT_Altria_Oruta_Rancer,
    eRANK_FOR_SERVANT_medusa,
    eRANK_FOR_SERVANT_Pearl_Verty,
    eRANK_FOR_SERVANT_Nata,
    eRANK_FOR_SERVANT_Astolpho,
    eRANK_FOR_SERVANT_Ann_Bonnie_Mary_Lead,
    eRANK_FOR_SERVANT_Marie_Antoinette,
    eRANK_FOR_SERVANT_Malta,
    eRANK_FOR_SERVANT_Nursery_rhyme,
    eRANK_FOR_SERVANT_Nitokurisu,
    eRANK_FOR_SERVANT_Media_lily,
    eRANK_FOR_SERVANT_Gilgamesh,
    eRANK_FOR_SERVANT_Elena_Bravatsky,
    eRANK_FOR_SERVANT_Thomas_Edison,
    eRANK_FOR_SERVANT_Oceanos_caster,
    eRANK_FOR_SERVANT_Steno,
    eRANK_FOR_SERVANT_Emiya_Assassin,
    eRANK_FOR_SERVANT_Carmilla,
    eRANK_FOR_SERVANT_Assassin_of_Shinjuku,
    eRANK_FOR_SERVANT_Assassin_of_the_midnight_castle,
    eRANK_FOR_SERVANT_Assassin_Paraiso,
    eRANK_FOR_SERVANT_Hercules,
    eRANK_FOR_SERVANT_Lancelot,
    eRANK_FOR_SERVANT_Frankenstein,
    eRANK_FOR_SERVANT_Beowulf,
    eRANK_FOR_SERVANT_Tamamo_Cat,
    eRANK_FOR_SERVANT_Ibaraki,
    eRANK_FOR_SERVANT_Berserker_of_ElDorado,
    eRANK_FOR_SERVANT_Atalante_Oorta,
    eRANK_FOR_SERVANT_Gorgon,
    eRANK_FOR_SERVANT_Avenger_of_Shinjuku,
    eRANK_FOR_SERVANT_END,

    eRANK_FOR_SERVANT_MAX = eRANK_FOR_SERVANT_END,
} eRANK_FOR_SERVANT;

const char* RankforServantNames [eRANK_FOR_SERVANT_MAX] = {
    //48
    "アルトリア・ペンドラゴン[オルタ]",
    "ネロ・クラウディウス",
    "ガウェイン",
    "ジークフリート",
    "ラーマ",
    "ランスロット",
    "シュヴァリエ・デオン",
    "鈴鹿御前",
    "エミヤ",
    "アタランテ",
    "トリスタン",
    "アーチャー・インフェルノ",
    "ケイローン",
    "ヴラド三世[EXTRA]",
    "エリザベート・バートリー",
    "フィン・マックール",
    "李書文",
    "アルトリア・ペンドラゴン[オルタ ランサー]",
    "メドゥーサ",
    "パールヴァティー",
    "哪吒",
    "アストルフォ",
    "アン・ボニー＆メアリー・リード",
    "マリー・アントワネット",
    "マルタ",
    "ナーサリー・ライム",
    "ニトクリス",
    "メディア[リリィ]",
    "ギルガメッシュ",
    "エレナ・ブラヴァツキー",
    "トーマス・エジソン",
    "オケアノスのキャスター",
    "ステンノ",
    "エミヤ[アサシン]",
    "カーミラ",
    "新宿のアサシン",
    "不夜城のアサシン",
    "アサシン・パライソ",
    "ヘラクレス",
    "ランスロット",
    "フランケンシュタイン",
    "ベオウルフ",
    "タマモキャット",
    "茨木童子",
    "エルドラドのバーサーカー",
    "アタランテ[オルタ]",
    "ゴルゴーン",
    "新宿のアヴェンジャー",
};

//星３鯖
typedef enum {
    //37
    eRANK_THREE_SERVANT_BEGIN = 0,
    eRANK_THREE_SERVANT_Bediviere = eRANK_THREE_SERVANT_BEGIN,
    eRANK_THREE_SERVANT_Gaius_Julius_Caesar,
    eRANK_THREE_SERVANT_Fergus_Mac_Roy,
    eRANK_THREE_SERVANT_Jill_de_Le,
    eRANK_THREE_SERVANT_Robin_Hood,
    eRANK_THREE_SERVANT_David,
    eRANK_THREE_SERVANT_Billy_the_Kid,
    eRANK_THREE_SERVANT_Euriale,
    eRANK_THREE_SERVANT_Tawara,
    eRANK_THREE_SERVANT_Child_Gill,
    eRANK_THREE_SERVANT_Koo_Fu_Lin,
    eRANK_THREE_SERVANT_Dilmud_Odina,
    eRANK_THREE_SERVANT_Koo_Fulin_prototype,
    eRANK_THREE_SERVANT_Romulus,
    eRANK_THREE_SERVANT_Houzouin,
    eRANK_THREE_SERVANT_Hector,
    eRANK_THREE_SERVANT_Jaguar_Man,
    eRANK_THREE_SERVANT_Medusa,
    eRANK_THREE_SERVANT_Boodica,
    eRANK_THREE_SERVANT_Usiwaka,
    eRANK_THREE_SERVANT_Alexander,
    eRANK_THREE_SERVANT_Media,
    eRANK_THREE_SERVANT_Jill_de_Le_Kyaster,
    eRANK_THREE_SERVANT_Van_Hohenheim_Paracelsus,
    eRANK_THREE_SERVANT_Charles_Babbage,
    eRANK_THREE_SERVANT_Mephistopheres,
    eRANK_THREE_SERVANT_Jeronimo,
    eRANK_THREE_SERVANT_Koo_Fulin_Caster,
    eRANK_THREE_SERVANT_Avicevlon,
    eRANK_THREE_SERVANT_Hasan_of_the_greatest_appearance,
    eRANK_THREE_SERVANT_Henry_Jekyll_Hyde,
    eRANK_THREE_SERVANT_Hasan_of_calm,
    eRANK_THREE_SERVANT_Keika,
    eRANK_THREE_SERVANT_Humakotarou,
    eRANK_THREE_SERVANT_Rohu,
    eRANK_THREE_SERVANT_Darios_III,
    eRANK_THREE_SERVANT_Kiyohime,
    eRANK_THREE_SERVANT_END,

    eRANK_THREE_SERVANT_MAX = eRANK_THREE_SERVANT_END,
} eRANK_THREE_SERVANT;

const char* RankthreeServantNames [eRANK_THREE_SERVANT_MAX] = {
    //37
    "ベディヴィエール",
    "ガイウス・ユリウス・カエサル",
    "フェルグス・マック・ロイ",
    "ジル・ド・レェ[セイバー]",
    "ロビンフッド",
    "ダビデ",
    "ビリー・ザ・キッド",
    "エウリュアレ",
    "俵藤太",
    "子ギル",
    "クー・フーリン",
    "ディルムッド・オディナ",
    "クー・フーリン[プロトタイプ]",
    "ロムルス",
    "宝蔵院胤舜",
    "ヘクトール",
    "ジャガーマン",
    "メドゥーサ",
    "ブーディカ",
    "牛若丸",
    "アレキサンダー",
    "メディア",
    "ジル・ド・レェ[キャスター]",
    "ヴァン・ホーエンハイム・パラケルスス",
    "チャールズ・バベッジ",
    "メフィストフェレス",
    "ジェロニモ",
    "クー・フーリン[キャスター]",
    "アヴィケブロン",
    "百貌のハサン",
    "ヘンリー・ジキル＆ハイド",
    "静謐のハサン",
    "荊軻",
    "風魔小太郎",
    "呂布奉先",
    "ダレイオス三世",
    "清姫",
};

//星５礼装
typedef enum {
    //18
    eRANK_FIVE_REISOU_BEGIN = 0,
    eRANK_FIVE_REISOU_Formal_craft = eRANK_FIVE_REISOU_BEGIN,
    eRANK_FIVE_REISOU_Imaginary_Around,
    eRANK_FIVE_REISOU_Limited_Zero_over,
    eRANK_FIVE_REISOU_Kaleidoscope,
    eRANK_FIVE_REISOU_Heavens_Feel,
    eRANK_FIVE_REISOU_Prismas_cosmos,
    eRANK_FIVE_REISOU_Black_Holy_Grail,
    eRANK_FIVE_REISOU_Winner_of_the_month,
    eRANK_FIVE_REISOU_Another_ending,
    eRANK_FIVE_REISOU_A_piece_in_2030,
    eRANK_FIVE_REISOU_Five_hundred_years_of_deception,
    eRANK_FIVE_REISOU_Saints_cost,
    eRANK_FIVE_REISOU_Ideal_King,
    eRANK_FIVE_REISOU_Menstrual_spinal_fluid,
    eRANK_FIVE_REISOU_Before_Awake,
    eRANK_FIVE_REISOU_Origin_bullet,
    eRANK_FIVE_REISOU_Magical_bodhisattva,
    eRANK_FIVE_REISOU_In_the_sunny_pool,
    eRANK_FIVE_REISOU_END,

    eRANK_FIVE_REISOU_MAX = eRANK_FIVE_REISOU_END,
} eRANK_FIVE_REISOU;

const char* RankfiveReisouNames [eRANK_FIVE_REISOU_MAX] = {
    //18
    "フォーマルクラフト",
    "イマジナリ・アラウンド",
    "リミテッド・ゼロオーバー",
    "カレイドスコープ",
    "ヘブンズフィール",
    "プリズマコスモス",
    "黒の聖杯",
    "月の勝利者",
    "もう一つの結末",
    "2030年の欠片",
    "五百年の妄執",
    "聖者の依り代",
    "理想の王聖",
    "月霊髄液",
    "目醒め前",
    "起源弾",
    "魔性菩薩",
    "陽だまりの中で",
};

//星４礼装
typedef enum {
    //26
    eRANK_FOR_REISOU_BEGIN = 0,
    eRANK_FOR_REISOU_Steel_training = eRANK_FOR_REISOU_BEGIN,
    eRANK_FOR_REISOU_Primitive_spell,
    eRANK_FOR_REISOU_Projection_magic,
    eRANK_FOR_REISOU_Gand,
    eRANK_FOR_REISOU_Green_disruptive_sound,
    eRANK_FOR_REISOU_Jewel_magic_contrary,
    eRANK_FOR_REISOU_Elegant,
    eRANK_FOR_REISOU_Imaginary_magic,
    eRANK_FOR_REISOU_Heavenly_Supper,
    eRANK_FOR_REISOU_Angels_poetry,
    eRANK_FOR_REISOU_Seal_designation_enforcer,
    eRANK_FOR_REISOU_The_sanctuary_of_Magdala,
    eRANK_FOR_REISOU_A_single_sword,
    eRANK_FOR_REISOU_Code_cast,
    eRANK_FOR_REISOU_Knights_holding,
    eRANK_FOR_REISOU_Spirit_Magic,
    eRANK_FOR_REISOU_Intention_to_wake_up,
    eRANK_FOR_REISOU_Millennial_Golden_Tree,
    eRANK_FOR_REISOU_Record_holder,
    eRANK_FOR_REISOU_A_viper_snake,
    eRANK_FOR_REISOU_The_art_of_death,
    eRANK_FOR_REISOU_Soft_compassion,
    eRANK_FOR_REISOU_Loveless_daughter,
    eRANK_FOR_REISOU_Aiding_shooting,
    eRANK_FOR_REISOU_Room_girder,
    eRANK_FOR_REISOU_The_last_storyteller,
    eRANK_FOR_REISOU_END,

    eRANK_FOR_REISOU_MAX = eRANK_FOR_REISOU_END,
} eRANK_FOR_REISOU;

const char* RankforReisouNames [eRANK_FOR_REISOU_MAX] = {
    //26
    "鋼の鍛錬",
    "原始呪術",
    "投影魔術",
    "ガンド",
    "緑の破音",
    "宝石魔術・対影",
    "優雅たれ",
    "虚数魔術",
    "天の晩餐",
    "天使の詩",
    "封印指定　執行者",
    "マグダラの聖骸市",
    "一の太刀",
    "コードキャスト",
    "騎士の矜持",
    "死霊魔術",
    "目覚めた意思",
    "千年黄金樹",
    "レコードホルダー",
    "毒蛇一芸",
    "死の芸術",
    "柔らかな慈愛",
    "恋知らぬ令嬢",
    "援護射撃",
    "ルームガーダー",
    "最後の語り部",
};

//星３礼装
typedef enum {
    //22
    eRANK_THREE_REISOU_BEGIN = 0,
    eRANK_THREE_REISOU_Temple = eRANK_FOR_REISOU_BEGIN,
    eRANK_THREE_REISOU_Love_medicine,
    eRANK_THREE_REISOU_Bronze_Manipulator,
    eRANK_THREE_REISOU_Atogaura,
    eRANK_THREE_REISOU_Hydor_Dagger,
    eRANK_THREE_REISOU_Pass_away_and_dream,
    eRANK_THREE_REISOU_Spicy_Mabo_Tofu,
    eRANK_THREE_REISOU_Jewel_sword_zereretch,
    eRANK_THREE_REISOU_Battle_of_Cam_Ran,
    eRANK_THREE_REISOU_Flagarac,
    eRANK_THREE_REISOU_Moon_in_the_sky,
    eRANK_THREE_REISOU_Intrinsic_barrier,
    eRANK_THREE_REISOU_Rejuvenating_spirit,
    eRANK_THREE_REISOU_Mystery_masks,
    eRANK_THREE_REISOU_Freelancer,
    eRANK_THREE_REISOU_Basilica_of_rubble,
    eRANK_THREE_REISOU_Morning_Season_Shinji,
    eRANK_THREE_REISOU_Atlas_Institute,
    eRANK_THREE_REISOU_Illusion_species,
    eRANK_THREE_REISOU_God_shelling_armor,
    eRANK_THREE_REISOU_Eating_soul,
    eRANK_THREE_REISOU_Wisdom_light,
    eRANK_THREE_REISOU_END,

    eRANK_THREE_REISOU_MAX = eRANK_THREE_REISOU_END,
} eRANK_THREE_REISOU;

const char* RankthreeReisouNames [eRANK_THREE_REISOU_MAX] = {
    //22
    "柳洞寺",
    "愛の霊薬",
    "ブロンズ・マニピュレーター",
    "アトゴウラ",
    "ヒュドラー・ダガー",
    "過ぎ去りし夢",
    "激辛麻婆豆腐",
    "宝石剣ゼルレッチ",
    "カムランの戦い",
    "フラガラック",
    "天の逆月",
    "固有結界",
    "若返りの霊薬",
    "謎の仮面群",
    "フリーランサー",
    "瓦礫の聖堂",
    "まるごしシンジ君",
    "アトラス院",
    "幻想種",
    "神造兵装",
    "魂喰い",
    "叡智の光",
};

int main(void)
{
    clock_t start, end;
    start = clock();

    int kakuritu = 0,kakutei = 0;
    int h[6],haisyutu[6];
    int gosaba = 0, yonsaba = 0, sansaba = 0;
    int goreisou = 0, yonreisou = 0, sanreisou = 0;
    int nameselectgo, nameselectyon, nameselectsan;
    int nameselectgor, nameselectyonr, nameselectsanr;

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
            if (kakuritu <= haisyutu[0]) //星５鯖の排出処理
            {
                printf("┏━━━━━━━━┓\n");
                printf("┃ 星５鯖 ┃ ");
                nameselectgo = rand() % 25; //星５鯖の個別選択
                printf(" %s\n", RankfiveServantNames[nameselectgo]);
                printf("┗━━━━━━━━┛\n");
                kakutei = kakutei + 1;
                gosaba = gosaba + 1;
            }
            else if (kakuritu <= haisyutu[1]) //星４鯖の排出処理
            {
                printf("  星４鯖　　");
                nameselectyon = rand() % 48; //星４鯖の個別選択
                printf(" %s\n", RankforServantNames[nameselectyon]);
                kakutei = kakutei + 1;
                yonsaba = yonsaba + 1;
            }
            else if (kakuritu <= haisyutu[2]) //星５礼装の排出処理
            {
                printf("┏━━━━━━━━━━┓\n");
                printf("┃ 星５礼装 ┃");
                nameselectgor = rand() % 18; //星５礼装の個別選択
                printf(" %s\n", RankfiveServantNames[nameselectgor]);
                printf("┗━━━━━━━━━━┛\n");
                kakutei = kakutei + 1;
                goreisou = goreisou + 1;
            }
            else if (kakuritu <= haisyutu[3]) //星４礼装排出処理
            {
                printf("  星４礼装　");
                nameselectyonr = rand() % 26; //星４礼装の個別選択
                printf(" %s\n", RankforReisouNames[nameselectyonr]);
                kakutei = kakutei + 1;
                yonreisou = yonreisou + 1;
            }
            else if (kakuritu <= haisyutu[4]) //星３鯖排出処理
            {
                printf("  星３鯖　　");
                nameselectsan = rand() % 37; //星３鯖の個別選択
                printf(" %s\n", RankthreeServantNames[nameselectsan]);
                kakutei = kakutei + 1;
                sansaba = sansaba + 1;
            }
            else if (kakuritu <= haisyutu[5]) //星３礼装排出処理
            {
                printf("  星３礼装　");
                nameselectsanr = rand() % 22; //星３礼装の個別選択
                printf(" %s\n", RankthreeReisouNames[nameselectsanr]);
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