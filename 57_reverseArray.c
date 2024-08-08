#include <stdio.h>
void reverse(int [],int);
void swap(int*,int*);
int main() 
{
int i,arr[10],size;
size=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<size;i++){
  printf("Enter the %d element\n",i+1);
  scanf("%d",&arr[i]);
}
printf("The array before reverse\n");
for(i=0;i<size;i++){
  printf("%d ",arr[i]);
}
reverse(arr,size);
printf("\nThe array after reverse\n");
for(i=0;i<size;i++){
  printf("%d ",arr[i]);
}
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

