#include <stdio.h>
#include <stdlib.h>

main()
{
	int n;
	printf("Enter the memory size allocated through malloc\n");
	scanf("%d",&n);
	int *ptr1=(int*)malloc(n*sizeof (int));
	if(ptr1==NULL){
		printf("memory allocation failed\n");
	}
	else
	printf("memory allocated successful\n");
	
	int i;
	for(i=0;i<n;i++){
		ptr1[i]=i+1;
	}
	for(i=0;i<n;i++){
		printf("%d ",ptr1[i]);
	}
	ptr1=(int*)realloc(ptr1,(n+10)* sizeof (int));
	printf("\nmemory successful allocated through realloc\n");
	for(i=n;i<n+10;i++){
		ptr1[i]=i+1;
	}
	printf("\n");
	for(i=0;i<n+10;i++){
		printf("%d ",ptr1[i]);
	
	
	}
	
	
	int n1;
	printf("\nenter the no. of memory allocated through calloc\n");
	scanf("%d",&n1);
	int *ptr2=(int*)calloc(n1,sizeof(int));
	if(ptr2==NULL){
		printf("memory allocation failed\n");
	}
	else
	printf("memory allocated successful\n");
	int j;
	for(j=0;j<n1;j++){
		ptr2[j]=j+1;
	}
	for(j=0;j<n1;j++){
		printf("%d ",ptr2[j]);
	}
	ptr2=(int*)realloc(ptr2,(n1+10)* sizeof (int));
	printf("\nmemory successful allocated through realloc\n");
	for(j=n1;j<n1+10;j++){
		ptr2[j]=j+1;
	}
	printf("\n");
	for(j=0;j<n1+10;j++){
		printf("%d ",ptr2[j]);
	
	
	}
	

}
