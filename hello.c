#include <stdio.h>

int main(void)
{
	
	int a;
	
	printf("整数を入力して！\n");
	scanf("%d",&a);

	if(a < 100){
		printf("aの値は100より小さいです。\n");

	}else if (a== 100){
		printf("aの値は100と同じ値ですよ！\n");
	}else{
		printf("aの値は１００より大きい値ですな\n");
	}


	return 0;
}

