//swapping of value of two int type variables
#include <stdio.h>
#include <conio.h>
  int a=10;
	int b=20;
swap()
{
  int temp=a;
	a=b;
	b=temp;
	
}
main()
{
	printf("before swapping the value of a is %d\n",a);
	printf("before swapping the value of b is %d\n",b);
	swap();
	printf("after swapping the value of a is %d\n",a);
	printf("after swapping the value of b is %d\n",b);
}  

//2nd method

/*main()
{
	int a=10;
	int b=20;
	printf("before swapping the value of a is %d\n",a);
	printf("before swapping the value of b is %d\n",b);
	//swapping
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping the value of a is %d\n",a);
	printf("after swapping the value of b is %d\n",b);
		
}  */

//3rd mrthod

/*main()
{
	int a=10;
	int b=20;
	printf("before swapping the value of a is %d\n",a);
	printf("before swapping the value of b is %d\n",b);
	//swapping
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swapping the value of a is %d\n",a);
	printf("after swapping the value of b is %d\n",b);
}  */

//4th method

/*main()
{
	int a=10;
	int b=20;
	printf("before swapping the value of a is %d\n",a);
	printf("before swapping the value of b is %d\n",b);
	//swapping
	b=(a+b)-(a=b);
	printf("after swapping the value of a is %d\n",a);
	printf("after swapping the value of b is %d\n",b);
} */

//5th method

/*main()
{
	int a=10;
	int b=20;
	printf("before swapping the value of a is %d\n",a);
	printf("before swapping the value of b is %d\n",b);
//swapping
a=a^b;
b=a^b;
a=a^b;

	printf("after swapping the value of a is %d\n",a);
	printf("after swapping the value of b is %d\n",b);
} */



