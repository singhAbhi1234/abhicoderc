#include <stdio.h>

int main()
{
  float marks;
  printf("Enter marks in percentage\n");
  scanf("%f",&marks);
  marks>80?printf("High"):(marks>=50?printf("Moderate"):printf("Low"));
  

}