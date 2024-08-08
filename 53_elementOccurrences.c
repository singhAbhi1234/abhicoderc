#include <stdio.h>

int main()
{
  int i,arr[10],element;
  int size=sizeof(arr)/sizeof(arr[0]);
  printf("%d\n",size);
  for(i=0;i<size;i++){
    printf("Enter the %d element\n",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to check occurrences\n");
  scanf("%d",&element);
  int count=elementOccure(arr,element);
  printf("The no. of occurrence of %d is: %d\n",element,count);

}

int elementOccure(int arr[],int element){
  int count=0,i;
  for(i=0;i<10;i++){
    if(arr[i]==element){
      count++;
    }
  }
  return count;
}