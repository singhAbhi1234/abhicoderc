#include <stdio.h>

insertionSort(int arr[],int n)
{
	int i,j,key;
	
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
			
		}
	
		arr[j+1]=key;
	}
}

main()
{
	int arr[]={40,15,90,50,100,50,20};
	int n=sizeof arr/sizeof arr[0];
	insertionSort(arr,n);
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
