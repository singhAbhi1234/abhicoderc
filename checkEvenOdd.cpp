//write a program to check whether a given numbar is even or odd
#include <stdio.h>
#include <conio.h>
main()
{
	long long a;
	printf("Enter a number\n");
	scanf("%lld",&a);
	if(a%2==0)
	{
		printf("%lld is even number",a);
	}
	else
	printf("%lld is odd number",a);
}


//2nd method
/*main()
{
	long long a;
	printf("Enter a number\n");
	scanf("%lld",&a);
	if(a%2)
	{
		printf("%lld is odd number",a);
	}
	else
	printf("%lld is even number",a);
}*/

//3rd method

/*main()
{
	long long a;
	printf("Enter a number\n");
	scanf("%lld",&a);
	if((a/2)*2==a)
	{
		printf("%lld is even number",a);
	}
	else
	printf("%lld is odd number",a);
} */

//4th method


/*main()
{
	long long a;
	printf("Enter a number\n");
	scanf("%lld",&a);
	if(a&1)
	{
		printf("%lld is odd number",a);
	}
	else
	printf("%lld is even number",a);
}*/
