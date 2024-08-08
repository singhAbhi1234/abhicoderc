#include <stdio.h>
#include <ctype.h>

int main()
{
  char str[100];
  int i;
  printf("Enter your string\n");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i];i++){
    str[i]=toupper(str[i]);
  }
printf("the new String is:\n");
puts(str);
}