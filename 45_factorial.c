#include <stdio.h>

long long factorial(int);
int main()
{
  int n;
printf("Enter the number\n");
scanf("%d",&n);
long long s=factorial(n);
printf("%lld",s);

}

long long factorial(int n){
  if(n==0){
    return 1;
  }
  long long f=n*factorial(n-1);
  return f;
}
