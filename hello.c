#include <stdio.h>

int main(void)
{
	
	int a;
	
	printf("私があなたのどこの筋肉の部位が好きか教えてあげる❤︎　1-3の数字を入力してね♪♪ウフフッ❤︎❤︎\n");
	scanf("%d",&a);

	switch(a){
	case 1 :
		printf("腹斜筋♪♪\n");
		break;
	
	case 2 :
		printf("上腕三頭金♪♪\n");
		break;

	
	default:
		printf("大胸筋\n");
}

	return 0;
}

