#include <stdio.h>
#include <stdlib.h>
int push(int);
int pop();
bool isStackOverFlow();
bool isStackUnderFlow();
int display();
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
int stackSize=5;

int top=0;
int choise;
int main(){
	printf("\nStack Application has started\n");
	while(1){
	
		printf("################ Select From Below Menu ######################\n");
		printf("\n	Press 1. for Push ");
			printf("\n	Press 2. for Pop ");
				printf("\n	Press 3. for Display ");
					printf("\n	Press 4. for Exit ");
		printf("\n##############################################################");
							printf("\n	Please enter your choise\n");
scanf("%d",&choise);
		switch(choise){
			case 1:
				if(isStackOverFlow()){
					int data;
					printf("Enter node data\n");
					scanf("%d",&data);
					push(data);
				}
				else{
					printf("\n	There is no chance to push into stack now, stackOverFlow.\n");
				}
				break;
				case 2:
					if(isStackUnderFlow()){
						pop();
					}
					else{
						printf("\n	There is no chance to pop element from stack now, stackUnderFlow.\n");
					}
					break;
					case 3:
						display();
						break;
						case 4:
							return 0;
							default:
								printf("there is no such choice\n");
						
					
			}
}
}
bool isStackOverFlow()
{
	if(top<stackSize){
		return true;
	}
	else{
		return false;
	}
		}	
	
	bool isStackUnderFlow()
	{
		if(top==0){
			return false;
		}
		return true;
			}
			
	push(int data){
		top++;
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
		}
		else{
			struct node *ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
		
	}
	
	pop(){
		struct node *ptr=head;
		struct node *prev_ptr;
		while(ptr->next!=NULL){
			prev_ptr=ptr;
			ptr=ptr->next;
		}
		free(ptr);
		prev_ptr->next=NULL;
		top--;
	}	
	
	display(){
		struct node *ptr=head;
		int i;
		for(i=0;i<top;i++){
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}			
