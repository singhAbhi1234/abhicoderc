#include <stdio.h>
#include <stdlib.h>
int newNode(int);

struct node{
	int data;
	struct node *previous;
	struct node *next;
	
};

struct node *head=NULL;
struct node *tail=NULL;

newNode(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
	if(head==NULL){
		temp->previous=NULL;
		temp->next=NULL;
		head=temp;
		tail=temp;
	}
	else{
		tail->next=temp;
		temp->previous=tail;
		tail=temp;
		tail->next=NULL;
	}
}

main(){
	newNode(10);
	newNode(20);
	newNode(30);
	newNode(40);
	newNode(50);
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
	struct node *ptr1=tail;
	while(ptr1!=NULL){
		printf("%d ",ptr1->data);
		ptr1=ptr1->previous;
}
}
