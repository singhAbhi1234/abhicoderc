#include <stdio.h>
#include <string.h>

struct st{
	int a;
	char b;
	char c[20];
};

union un{
	int a;
	char b;
	char c[20];
};

main()
{
	struct st s={10,'Z',"abhi"
	};
	union un u;
	strcpy(u.c,"abhi");
	
	
	printf("%d\n%c\n%s\n",s.a,s.b,s.c);
		printf("%d\n%c\n%s\n",u.a,u.b,u.c);
		
		struct st *ptr1=&s;
		union un *ptr2=&u;
		printf("member access through pointer\n");
		printf("%d\n%c\n%s\n",ptr1->a,ptr1->b,ptr1->c);
		printf("%d\n%c\n%s",ptr2->a,ptr2->b,ptr2->c);
		
}
