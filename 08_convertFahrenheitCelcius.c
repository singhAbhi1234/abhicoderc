#include <stdio.h>

int main()
{
  float c,f;
  printf("Enter temperature in celcius\n");
  scanf("%f",&c);
  f=c*9/5+32;
  printf("the temperature in fahrenheit is: %f\n",f);

printf("Enter temperature in fahrenheit\n");
  scanf("%f",&f);
  c=(f-32)*5/9;
  printf("the temperature in celcius is: %f\n",c);

}