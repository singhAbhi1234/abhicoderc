#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
//1st method
struct node{
	int data;
	struct node *next;
};

main()
{
	struct node *node1=(struct node*)malloc(sizeof(struct node));
	struct node *node2=(struct node*)malloc(sizeof(struct node));
	struct node *node3=(struct node*)malloc(sizeof(struct node));
	struct node *node4=(struct node*)malloc(sizeof(struct node));
	
	node1->data=10;
	node2->data=20;
	node3->data=30;
	node4->data=40;
	
	struct node *head=node1;
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=NULL;
	
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d  ",ptr->data);
		ptr=ptr->next;
	}
}

//2nd method
/*struct node{
	int data;
	struct node *next;
};

struct node *newNode(int data,struct node *nextNode)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=nextNode;
	return temp;

}

main()
{
	struct node *head=newNode(10,newNode(20,newNode(30,newNode(40,newNode(50,NULL)))));
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}*/

//3rd method

/*struct node{
	int data;
	struct node *next;
};

struct node *newNode(int data,struct node *nextNode)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=nextNode;
	return temp;

}
main()
{
int values[]={10,20,30};  
int n=sizeof values/sizeof values[0];
struct node *head=NULL;
struct node *ptr;
int i;
for(i=n-1;i>=0;i--){
	ptr= newNode(values[i],ptr);
		head = ptr;
	
}	
while(ptr->next != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}*/

//4th method
//making header pointer globle

/*struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;

push(int data)
{
	struct node *temp=(struct node*)malloc(sizeof (struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
}

main()
{
int values[]={10,20,30,40,50};
int n=sizeof values/sizeof values[0];

int i;
for(i=n-1;i>=0;i--){
push(values[i]);
	
}	
struct node *ptr=head;
while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}*/








