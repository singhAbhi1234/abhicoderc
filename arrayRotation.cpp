#include <stdio.h>

//one by one
/*int arrayRotation(int arr[],int n,int d)
{
	int p=1;
	while(p<=d){
	
	int last=arr[0];
	int i;
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=last;
	p++;
}
}


main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n= sizeof(arr)/sizeof(arr[0]);
	arrayRotation(arr,n,3);
	printf("the rotated array is");
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",  arr[i]);
	}
	
}*/

//using temporary array

/*int arrayRotation(int arr[],int n,int d)
{
int	temp[n];
	int j=0;
	int i;
	for(j=0;j<n-d;j++){
		temp[j]=arr[i+d];
		printf("%d  ",arr[j]);
		i++;
		
	}
	for(i=0;i<d;i++){
		temp[j]=arr[i];
		j++;
	}
	for(j=0;j<n;j++){
		arr[i]=temp[j];
		i++;
			}
	
}
main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n= sizeof(arr)/sizeof(arr[0]);
	arrayRotation(arr,n,1);
	printf("the rotated array is ");
	int i;
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}*/

int arrayRotation(int arr[],int n,int d)
{
int	temp[n];
	int j=0;
	int i;
	for(i=d;i<n;i++){
		temp[j]=arr[i];
		printf("%d  ",arr[j]);
		j++;
		
	}
	for(i=0;i<d;i++){
		temp[j]=arr[i];
		j++;
	}
	for(j=0;j<n;j++){
		arr[i]=temp[i];
		i++;
			}
	
}
main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n= sizeof(arr)/sizeof(arr[0]);
	arrayRotation(arr,n,3);
	printf("the rotated array is ");
	int i;
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
	
	
