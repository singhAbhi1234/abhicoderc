#include <stdio.h>

int reverseArray(int arr[],int n)
{
	int a=0;
	int b=n-1;
	
	while(a<=b)
	{
		int x=arr[a];
		arr[a]=arr[b];
		arr[b]=x;
		a++;
		b--;
	}
	return 0;
} 

main()
{
	int arr[]={10,20,30,40,50,60,70,80};
	int n= sizeof(arr)/sizeof(arr[0]);
	 reverseArray(arr, n);
	 printf("the reverse array is");
	 int i;
	 for(i=0;i<n;i++){
	 	printf(" %d",  arr[i]);
	 }
	
}
