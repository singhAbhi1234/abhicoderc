#include <stdio.h>
#include<math.h>


min(int a,int b)
{
	if(a<b){
		return a;
	}
	return b;
}

int jumpSearch(int arr[],int n,int x)
{
	int step=sqrt(n);
	int prev=0;
	while(arr[min(step,n)-1]<x){
		prev=step;
		step+=sqrt(n);
		if(prev>=x)
		return -1;
		
	}
	
	while(arr[prev]<x){
		prev++;
		if(prev==min(step,n))
		return -1;
	}
	if(arr[prev]==x)
	return prev;
	return -1;
	
}

main()
{
	
	int arr[]={10,20,35,40,55,60,80,90,100,112,140,150};
	int n= sizeof(arr)/sizeof(arr[0]);
int result=	 jumpSearch( arr,n,30);
if(result==-1){

printf("Element is not present in this array\n");
}
else
	printf("the element present in array at index %d\n",result);
	
}
