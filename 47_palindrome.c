#include <stdio.h>
int palindrome(int,int);
int main(){
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  int reverse=palindrome(num,0);
  if(num==reverse){
    printf("Number is palindrome");
  }else
     printf("Number is not palindrome");

}

int palindrome(int num,int rev){
  if(num==0){
return rev;
  }
  int r=num%10;
int new_num=num/10;
int new_rev=rev*10+r;
return palindrome(new_num,new_rev);
}

