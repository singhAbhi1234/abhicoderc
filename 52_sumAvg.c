#include <stdio.h>
void sumAvg(int []);
int main()
{
  int arr[10],i;
  for(i=0;i<10;i++){
printf ("Enter the %d number\n",i+1);
scanf("%d",&arr[i]);
  }
  sumAvg(arr);
}

void sumAvg(int arr[]){
  int i,sum=0;
  float avg;
  for(i=0;i<10;i++){
   sum+=arr[i];
  }
  avg=sum/10.0;
  printf("The sum of array is %d\n",sum);
  printf("The average of array is %f\n",avg);
}