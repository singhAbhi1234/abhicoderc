#include <stdio.h>
#include <stdlib.h>
int creat(void);
int display(void);
int insertNode_begin(void);
int insertNode_end(void);
int insertNode_pos(void);
int deleteNode_begin(void);
int deleteNode_end(void);
int deleteNode_pos(void);
struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;
main(){
	while(1){
	
	
	printf("\n######################### choose anyone of the below options ############################\n");
	printf("\nEnter 1. for creat new node\n");
	printf("Enter 2. for display linkList data\n");
	printf("Enter 3. for insert new node at begin\n");
	printf("Enter 4. for insert new node at end\n");
	printf("Enter 5. for insert new node at any position\n");
	printf("Enter 6. for delete node from begining\n");
		printf("Enter 7. for delete node from end\n");
			printf("Enter 8. for delete node from any position\n");
	printf("Enter 9. for exit\n");
	int choise;
	scanf("%d",&choise);

	switch(choise){
		case 1:
	 creat();
			break;
			case 2:
				display();
				break;
				case 3:
					insertNode_begin();
					break;
					case 4:
						insertNode_end();
						break;
						case 5:
								insertNode_pos();
								break;
								case 6:
									deleteNode_begin();
									break;
									case 7:
										deleteNode_end();
											break;
										case 8:
										
										deleteNode_pos();
											break;
										case 9:
										return 0;
										default:
										printf("there is no such option");	
									
					
			
	}
}
}

creat(){
	int data;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter new node data\n");
	scanf("%d",&temp->data);
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

display()
{
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	
}

insertNode_begin(){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter new node data\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		struct node* ptr=head;
		head=temp;
		head->next=ptr;
	}
}
insertNode_end(){
	int data;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter new node data\n");
	scanf("%d",&temp->data);
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
//insert node after nth position
insertNode_pos(){
	int pos;
	printf("Enter the position which you want to add node\n");
	scanf("%d",&pos);
		struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter new node data\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else if(pos==0){
		struct node *ptr=head;
		temp->next=ptr;
		head=temp;
	}
	else{
		struct node *ptr=head;
		struct node *prev_ptr;
		int i;
		for(i=0;i<pos;i++){
		prev_ptr=ptr;
		ptr=ptr->next;
		}
		temp->next=ptr;
		prev_ptr->next=temp;
	}

	
}

deleteNode_begin(){
	if(head==NULL){
		printf("Linklist is empty\n");
	}
	else{
		struct node *ptr=head;
		head=head->next;
		free(ptr);
		
	}	
}
deleteNode_end(){
		if(head==NULL){
		printf("Linklist is empty\n");
	}
	else if(head->next==NULL){
		struct node *ptr=head;
		head=NULL;
		free(ptr);
	}
	else{
		struct node *ptr=head;
		struct node *prev_ptr;
		while(ptr->next!=NULL){
			prev_ptr=ptr;
			ptr=ptr->next;
		}
		prev_ptr->next=NULL;
		free(ptr);
	}
}
//delete node after nth position
deleteNode_pos(){
	int pos;
	printf("Enter the position which you want to delete\n");
	scanf("%d",&pos);
	struct node *ptr=head;
		struct node *prev_ptr;
	if(head==NULL){
			printf("Linklist is empty\n");
	}
	else if(pos==0){
		head=head->next;
		free(ptr);
	}
	else{
		int i;
		for(i=0;i<pos;i++){
				prev_ptr=ptr;
			ptr=ptr->next;
		}
		prev_ptr->next=ptr->next;
		free(ptr);
	}
	
}


