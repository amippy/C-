#include <stdio.h>

int main(void)
{

  int a=10;
  FILE *f;

  f=fopen("test.dat","rb");
  fread(&a,sizeof(a),1,f);
  fclose(f);
  printf("%d\n",a);

  return 0;
}

