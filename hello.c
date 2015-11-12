#include <stdio.h>

int main(void)
{
	
	int a,b,i[][5]={	//２次元配列の宣言
		{90,75,70,68,93},
		{85,72,95,78,62},
		{100,67,86,91,76},
		{70,92,73,100,81},
	};
		for (a=0;a<4;a++){
			for(b=0;b<5;b++){
				printf("%5d",i[a][b]);
	}
		printf("\n");
	}

	return 0;
}

