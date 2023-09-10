#include <stdio.h>
	int n;
int fect(int a)
{

	if(a<=0)
	{
	return 1;	
		
	}
n=a*fect(a-1);
}

main()
{

fect(5);
	printf("%d",n);

}

	/*#include <stdio.h>
int fect(int a)
{
	if(a>0)
return(a*fect(a-1));
else
	return 1;
}

main()
{


	printf("%d",fect(5));

}*/
