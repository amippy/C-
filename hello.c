#include <stdio.h>

int main(void)
{
	
	int i,a;

	for(i=0; i<=10; i++){			//変数iが１から１０になるまでループ

		for(a=0;a<=i;a++){		//変数aが０から変数iになるまでループ
			printf("❤︎");		//❤︎を画面に表示
	}
	printf("\n");

	}


	return 0;
}

