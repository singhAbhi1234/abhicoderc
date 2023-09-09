#include <stdio.h>

swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

selectionSort(int arr[],int n)
{
	int i,j,min_idx=0;
	for(i=0;i<n;i++){
	min_idx=i;
	for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx]){
				min_idx=j;
			}
	
	}

	
	if(i!=min_idx){
			swap(&arr[min_idx],&arr[i]);
	}
	
}
}

main()
{
	int arr[]={40,15,90,50,100,50,20};
	int n=sizeof arr/sizeof arr[0];
	selectionSort(arr,n);
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
