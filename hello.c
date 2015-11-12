#include <stdio.h>

int main(void)
{
	
	int a;
	
	printf("整数を入力して！\n");
	scanf("%d",&a);

	if(a==0){
		printf("aの値は０です。\n");

	}else{
		printf("aの値は０以外ですよ！\n");
	}

	return 0;
}

