#include <stdio.h>

int rei(int a);

int main(void)
{
  int n=rei(100);
  printf("合計=%d\n",n);

  return 0;
}
int rei(int a)
{
  int goukei= a+100+100;

  return goukei;
}
