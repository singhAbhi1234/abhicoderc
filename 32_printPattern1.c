#include <stdio.h>

int main()
{
  int row,i,j;
  printf("Enter no of rows\n");
  scanf("%d",&row);

  for(i=1;i<=row;i++){
    for(j=0;j<i;j++){
      printf("* ");
    }
    printf("\n");
  }
}