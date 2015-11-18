#include <stdio.h>

int main(void)
{
  char a[]="生美大好き";

  FILE *f;

  f=fopen("test.txt","w");
  fprintf(f,"%s",a);
  fclose(f);

  return 0;
}
