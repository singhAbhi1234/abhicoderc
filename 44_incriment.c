#include <stdio.h>
void incriment(int);
int main()
{
  int x=10;
  printf("before incriment the number is %d\n",x);
  incriment(x);
  printf("After incriment the number is %d\n",x);
}

void incriment(int a){
  a++;
  printf("the number inside incriment is %d\n",a);
}