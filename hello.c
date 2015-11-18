#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  int a;    //mine
  int b;    //laptop
  int c;    //じゃんけんの勝敗
  int d;    //じゃんけんをもう一度実施

  srand(time(NULL));    //乱数の種を初期化

  printf("じゃんけんしよーぜ！\n\n");

  do{
    b=rand() % 3;    //コンピュータの手を乱数で生成
    printf("じゃんけん・・・・・ぽーん\n");
    printf("あみーごの手は・・・・(0)ぐー(1)ちょき(2)ぱー:");
    scanf("%d",&a); //プレーヤーの手を読み込む

    printf("コンピュータは");

    switch(b)
    {

        case 0:
            printf("ぐー");
            break;
        case 1 :
            printf("ちょき");
            break;
        case 2:
            printf("パー");
            break;
        default:
            printf("不明");
    }
    printf("を出しました\n");

    c=(a-b+3)%3;

    switch(c)
    {
      case 0:
        printf("あいこ\n\n");
        break;
      case 1:
        printf("あんたの負け\n\n");
        break;
      case 2:
        printf("あんたの勝ち\n\n");
        break;
    }
    printf("もう一度じゃんけんする？・・・(0)いいえ(1)はい:");
    scanf("%d",&d);
  }while(d==1);

  return 0;
}

