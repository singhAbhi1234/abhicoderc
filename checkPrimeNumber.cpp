#include <stdio.h>
#include <conio.h>
main()
{
	bool isPrime=true;
	int r;
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int i;
	
	for(i=2;i<=n/2;i++){
	r=n%i;
if(r==0)
{
isPrime=false;
	break;
}

}
if(isPrime){
		printf("%d is a prime number\n",n);

}else{
	printf("%d is not a prime nmber\n",n);
}
}
