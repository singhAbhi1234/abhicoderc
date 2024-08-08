#include <stdio.h>

int main()
{
  int row,i,j,k;
  printf("Enter no of rows\n");
  scanf("%d",&row);

  for(i=1;i<=row;i++){
    for (k= 1; k <=row-i; k++)
    {
      printf("  ");
    }
    
    for(j=0;j<i;j++){
       printf("* ");
    }
    printf("\n");
  }
}