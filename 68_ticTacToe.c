#include <stdio.h>

int main()
{
  char str[3][3]={{'x','o','x'},{'x','x','o'},{'o','o','x'}};
int i,j;

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("%c",str[i][j]);
    if(j==2){
      break;
    }
    printf("|");
  }
  printf("\n-----\n");
}
}