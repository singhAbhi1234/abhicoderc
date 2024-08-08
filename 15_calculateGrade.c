#include <stdio.h>

int main()
{
  float marks;
  printf("Enter your marks percentage\n");
  scanf("%f",&marks);
  if(marks>90){
    printf("you got grade 'A'\n");

  }else if(marks>75){
     printf("you got grade 'B'\n");
  }else if(marks>60){
     printf("you got grade 'C'\n");
  }else if (marks>=30){
     printf("you got grade 'D'\n");
  }else{
    printf("You are fail\n");
  }
}