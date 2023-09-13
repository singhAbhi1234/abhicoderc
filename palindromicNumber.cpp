#include <stdio.h>
#include <conio.h>

 main ()
{
	int sum =0;
	int r;
	int number;
printf("Enter your number\n");
scanf("%d",&number);
int original = number;
while (number>0)
{
	r=number%10;
	sum=sum*10+r;
printf("%d",r);
number=number/10;

}
if (sum==original)
{
printf("number is palindromic nmber");
	
}
else
{
	printf("number is not palindromic number");
}






}
