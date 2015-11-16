#include <stdio.h>

void hello(void)    //hello関数を自作
{
  printf("こんにちは\n");

  return;         //呼び出された場所に戻る　

}

int main(void)    //main関数の呼び出し
{

  printf("おはよう！\n");
  hello();
                  //hello関数の呼び出し
  printf("こんばんは\n");

  return 0;
}

