#include <stdio.h>
#include <stdbool.h>
void reverse(int [],int);
void swap(int*,int*);
bool isPalindrome(int [],int [],int);

int main() 
{
int i,arr[10],size;
size=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<size;i++){
  printf("Enter the %d element\n",i+1);
  scanf("%d",&arr[i]);
}
int newArr[10];
for(i=0;i<size;i++){
  newArr[i]=arr[i];
}
reverse(arr,size);
if(isPalindrome(arr,newArr,size)){
  printf("array is Palindrome\n");
}else
 printf("array is not Palindrome\n");
}

void swap(int *p,int *q){
  int temp=*p;
  *p=*q;
  *q=temp;

}

void reverse(int arr[],int size){
  int i;
  for(i=0;i<size/2;i++){
    swap(&arr[i],&arr[size-1-i]);
  }
}

bool isPalindrome(int arr[],int newArr[],int size){
  int i;
for(i=0;i<size;i++){
  if(arr[i]!=newArr[i]){
    return false;
  }
}
return true;
}
