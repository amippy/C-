#include <stdio.h>

void hello(void);     //プロトタイプ宣言

int main(void)       //main関数の呼び出し
{
  printf("morning\n");
  hello();           //hello関数の呼び出し
  printf("evening\n");

  return 0;
}

void hello(void)        //hello関数を自作
{
  printf("yahoo!\n");

  return ;

}
