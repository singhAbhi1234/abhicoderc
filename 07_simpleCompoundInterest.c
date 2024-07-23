#include <stdio.h>
#include <math.h>

int main()
{
  double p;
  float r;
  int t;
  double SI,CI;
  printf("Enter the principal amount\n");
  scanf("%lf",&p);
  printf("Enter the rate of interest\n");
  scanf("%f",&r);
  printf("Enter the time in year\n");
  scanf("%d",&t);

SI=(p*r*t)/100;
printf("The simple interest is:%lf\n",SI);
double x=(1+r/100);
double y=pow(x,t);
CI=p*y-p;
printf("The compount interest is:%lf\n",CI);
}