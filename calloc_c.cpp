#include <stdio.h>
#include <stdlib.h>


main()
{
	int n,i;
	printf("enter the number of memory\n");
	
	scanf("%d",&n);
	int *ptr;
	 ptr=(int*) calloc(n,sizeof(int));
	 if(ptr==NULL){
	 	printf("memory is not created");
	 }
	 	printf("memory is successful created\n");
	 for(i=0;i<n;i++){
	 	ptr[i]=i+1;
	 }
	 for(i=0;i<n;i++){
	 	printf("%d ",ptr[i]);
}
}
