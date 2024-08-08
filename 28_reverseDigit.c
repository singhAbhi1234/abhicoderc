#include <stdio.h>

int main()
{
  int num,rnum=0,r;
  printf("Enter the numner\n");
  scanf("%d",&num);
  while (num>0)
  {
    r=num%10;
    num=num/10;
    rnum=rnum*10+r;
  }

  printf("the reverse number is %d",rnum);
}