#include <stdio.h>

void keisan(int a);   //プロトタイプ宣言

int main(void)

{
  printf("値はなんですか？\n");
  keisan(10);   //keisan関数の呼び出し

  return 0;
}

void keisan(int a)   // keisan関数
{
  if(a<=20){
    printf("値は２０以下です。\n");
  }else{
    printf("値は２１以上です。\n");
  }

  return;

}
