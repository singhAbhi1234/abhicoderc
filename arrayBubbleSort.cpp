#include <stdio.h>

swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int bubbleSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
			}
	}

	
}

main()
{
	int arr[]={40,15,90,50,100,50,20};
	int n=sizeof arr/sizeof arr[0];
	bubbleSort(arr,n);
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
