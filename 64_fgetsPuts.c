#include <stdio.h>
#include <string.h>

int main()
{
  char arr[20];
  printf("Enter your string\n");
  fgets(arr,sizeof(arr),stdin);
  puts(arr);
}