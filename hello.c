#include <stdio.h>

int main(void)
{
	
	int i ,a[]={5,7,10,100,150,200};	//要素数を指定しない配列の宣言と初期化
	
	for (i=0; i<=5; i++){			//変数iを０から5まで１ずつ増加
		printf("値は%dです。\n",a[i]);	//a[0]〜a[4]まで１ずつ増加
	}

	return 0;
}

