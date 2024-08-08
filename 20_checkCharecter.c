#include <stdio.h>
int main()
{
  char c;
  printf("Enter your charecter\n");
  scanf("%c",&c);
  if(c>='A' && c<='Z'){
    printf("Enter charecter is Alphabet Uppercase");
  }else if(c>='a' && c<='z'){
     printf("Enter charecter is Alphabet LowerCase");
  }else if(c>='0' && c<='9'){
     printf("Enter charecter is a number");
  }else{
     printf("Enter charecter is a special charecter");
  }
}