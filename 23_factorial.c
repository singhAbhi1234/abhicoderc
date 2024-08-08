#include <stdio.h>
int main()
{
  long long fact=1;
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  while (n>=1)
  {
    fact*=n;
    n--;
  }
  printf("the factorial is %llu",fact);
  
}