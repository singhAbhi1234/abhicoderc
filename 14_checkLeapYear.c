#include <stdio.h>

int main()
{
  int year;
  printf("Enter the year\n");
  scanf("%d",&year);
  if((year%400==0) || year%100!=0 && year%4==0){
    printf("The given year is Leap Year\n");
 } else{
   printf("The given year is not a Leap Year\n"); 
  }
}