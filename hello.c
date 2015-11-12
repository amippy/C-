#include <stdio.h>

int main(void)
{
	
	int a,b;


	printf("足し算を行います。好きな数値（整数）を入力してください。\n");
	printf("まずは１つ目の整数を入力してください。\n");
	scanf("%d",&a);		//aに整数を代入
	

	printf("２つ目の整数を入力してください。\n");
	scanf("%d",&b);		//bに整数を代入

	printf("%d+%d=%d\n",a,b,a+b);

	return 0;
}
