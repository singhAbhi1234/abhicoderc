#include <stdio.h>

int main()
{
  int num,i,r,sum=0;
  printf("Enter the number\n");
  scanf("%d",&num);
  i=num;
  while (i>0)
  {
    r=i%10;
    i=i/10;
sum=sum*10+r;
  }

  if(num==sum){
    printf("The number is palindrome\n");
  }else{
     printf("The number is not palindrome\n");
  }
  
}