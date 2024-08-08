#include <stdio.h>

int main()
{
  int date;
  char month[15];
  int year;

  printf("Enter date\n");
  scanf("%d",&date);
  printf("Enter month\n");
  scanf("%s",month);
  printf("Enter the year\n");
  scanf("%d",&year);

  printf("\nthe date is: %d/%s/%d",date,month,year);
}