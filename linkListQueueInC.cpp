#include <stdio.h>
#include <stdlib.h>
bool isQueueOverFlow();
bool isQueueUnderFlow();
int push(int );
int	pop();
int display();

struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
int queueSize=5;
int firstNode=0;
int lastNode=0;
int choise;
int main(){
	printf("\nQuequ Application has started\n");
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
				if(isQueueOverFlow()){
					int data;
					printf("Enter node data\n");
					scanf("%d",&data);
					push(data);
				}
				else{
					printf("\n	There is no chance to push into Queue now, QueueOverFlow.\n");
				}
				break;
				case 2:
					if(isQueueUnderFlow()){
						pop();
					}
					else{
						printf("\n	There is no chance to pop from Queue now, QueueUnderFlow.\n");
						
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
		
	bool isQueueOverFlow(){
			if(lastNode<queueSize){
				return true;
			}
			else{
				return false;
			}
			
		}
		
		bool isQueueUnderFlow(){
			if(firstNode==lastNode){
				return false;
			}
			else{
				return true;
			}
		}
		
		push(int data){
			lastNode++;
			struct node* temp=(struct node*)malloc(sizeof(struct node));
			temp->data=data;
			temp->next=NULL;
			if(head==NULL){
				head=temp;
			}
			else{
				struct node* ptr=head;
				while(ptr->next!=NULL){
					ptr=ptr->next;
				}
				ptr->next=temp;
			}
		}
		
		pop(){
		struct node *ptr=head;
		head=head->next;
		free(ptr);
		firstNode++;
			queueSize++;
		}
		
		display(){
			if(head==NULL){
				printf("the Queue is empty\n");
			}
			else{
				struct node *ptr=head;
				while(ptr!=NULL){
						printf("%d\n",ptr->data);
						ptr=ptr->next;
				}
			
			}
		}
