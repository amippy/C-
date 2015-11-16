#include <stdio.h>
#include<string.h>

struct person{
  char name[10];
  int age;
  char blood[2];
  double height;
  double weight;
};

int main(void)
{
  struct person ami;

  strcpy(ami.name,"ami");
  ami.age=20;
  strcpy(ami.blood,"?");
  ami.height=169;
  ami.weight=55;

  printf("名前:%s\n",ami.name);
  printf("年齢:%d\n",ami.age);
  printf("血液型:%s\n",ami.blood);
  printf("身長:%5.1f\n",ami.height);
  printf("体重:%5.1f\n",ami.weight);

  return 0;
}
