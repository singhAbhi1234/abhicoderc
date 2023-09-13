#include <stdio.h>

/*struct str1{
	int a;
	char c;
	float f;
}var2;

main()
{
	struct str1 var1={20,'h',5.6};
	var2.a=20;
var2.c='d';
var2.f=6.6;
struct str1 var3={.a=10, .c='k', .f=6.4};

	printf("%d\n%c\n%f\n",var1.a,var1.c,var1.f);
	printf("%d\n%c\n%f\n",var2.a,var2.c,var2.f);
	printf("%d\n%c\n%f",var3.a,var3.c,var3.f);
}*/

/*struct parent {
	int a;
	char b;
	struct child  {
		int c; 
		}ch;
};

main()
{
struct parent pr={10,'m',{20}};	
printf("%d\n%c\n%d",pr.a,pr.b,pr.ch.c);
}*/
/*struct child {
	int c;
};
struct parent{
	int a;
	char b;
	struct child ch;
};

main()
{
	struct child ch={10};
	struct parent pr={20,'A',ch};
	printf("%d\n%c\n%d",pr.a,pr.b,pr.ch.c);
	
	
}*/

//using pointer variable

/*struct parent {
	int a;
	char b;
	struct child  {
		int c; 
		
	}ch;
};

main()
{
struct parent pr={10,'m',{20}};	

struct parent *ptr =&pr;
	printf("%d\n%c\n%d",ptr->a,ptr->b,ptr->ch.c);
}*/


//self-refrential structures

struct str1{
	int a;
	char b;
	struct str1 *next;
};

main()
{
	struct str1 var1={10,'K',NULL
	};
	struct str1 var2={20,'J',NULL
	};
	
	var2.next=&var1;
	printf("%d\n%c\n%s\n",var2.next->a,var2.next->b,var2.next->next);
	printf("%d\n",sizeof (struct str1));
}



