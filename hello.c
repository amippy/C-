#include <stdio.h>
int a = 5;

void rei(void);

int main(void)
{
  int b=10;

  printf("main関数の値\n");
  printf("グローバル変数aの値は%d\n",a);
  printf("ローカル変数bの値は%d\n",b);

  rei();

  return 0;
}

void rei(void)
{
  int c =20;

  printf("rei関数の値\n");
  printf("グローバル変数aの値は%d\n",a);
  printf("ローカル変数bの値は%d\n",c);

  return ;

}
