#include <stdio.h>
#include <conio.h>

int main()
{
  const float PI=3.14;
  double r;
  printf("Enter the radius of a circle\n");
  scanf("%lf",&r);
  printf("The area of the circle is:%lf\n",(PI*r*r));
  printf("The circmference of the circle is:%lf\n",(2*PI*r));

}