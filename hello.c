#include <stdio.h>


void keisan(int a );

int main(void)
{
  int n;

  printf("値を入力してください\n");
  scanf("%d",&n);

  keisan(n);    /*変数nを指定してkeisan関数を呼び出す*/
 
  return 0;

}
void keisan(int a)
{
  if(a<=20){
    printf("値は20以下です。\n");
  }else{
    printf("値は20以上です。\n");
  }

  return ;
}

