#include <stdio.h>
long add(int,int,int,int);
int main()
{
long sum=add(20,30,40,50);
printf("%ld",sum);

}

long add(int a,int b,int c,int d){
  return a+b+c+d;
}