#include <stdio.h>

int main(void)
{
	int a,b;		

	a = 11;
	b = 5;

	printf("11+5=%d\n",a+b);	
	printf("11-5=%d\n",a-b);
	printf("11x5=%d\n",a*b);
	printf("11÷5=%d...%d\n",a/b,a%b);
			/*この行にブレークポイントを設定*/

	return 0;
}
