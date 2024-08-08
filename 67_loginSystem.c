# include <stdio.h>
#include <string.h>

int main()
{
  char password[20]="Abhi@123";
  char pass[20];

  printf("Enter password to login\n");
 scanf("%s",pass);
  
  int result=strcmp(password,pass);
  if(result==0){
    printf("you loged in successfully\n");
  }else{
    printf("Incorrect password\n");
  }
}