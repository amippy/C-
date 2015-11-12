#include <stdio.h>

int main(void)
{
	
	int a;
	
	printf("整数を入力して！\n");
	scanf("%d",&a);

	if(a >=5 && a<= 10)
		printf("aの値は５から１０の間でーす。\n");

	if(! (a >=5 && a <= 10))
		printf("aの値は５から０の間ではないよおお！\n");

	return 0;
}

