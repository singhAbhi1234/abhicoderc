#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isQueueOverFlow(void);
bool isQueueUnderFlow(void);
void push(int);
int pop(void);
int display(void);



int queue[3];
int queueSize=3;
int choise;
int insertion =-1;
int deletion=-1;
main()
{
	printf("\n Queue application has started\n");
	while(1){
	
	printf("************select from below option******************\n");
	printf("press 1. for push\n");
	printf("press 2. for pop\n");
	printf("press 3. for displayElement\n");
	printf("press 4. for exit\n");
	
	printf("################################################################\n");
	printf("****************chose your option****************\n");
	scanf("%d",&choise);
	
	switch(choise){
		case 1:
		if(isQueueOverFlow()){
			printf("please insert element\n");
			int element;
			scanf("%d",&element);
			printf("getting the insert vale is: %d\n",element);
			push(element);		
		}
		else
		printf("Queue overflow, you cannot insert element\n");
		break;
		
		case 2:
				if(isQueueUnderFlow()){
				int deleteElement=pop();
				printf("the deleted element is %d\n",deleteElement);
					
				}
				else
				printf("Queue underflow, you cannot delete element\n");
				break;
				
				case 3:
					display();
					
						break;
						case 4:
							return 0;
							default:
								printf("\n There is no such option\n");
					}
	}
}



bool isQueueOverFlow()
{
	if(insertion<queueSize-1){
		return true;
	}
	return false;
}

bool isQueueUnderFlow()
{
	if(deletion<insertion){
		return true;
	}
	return false;
}

void push(int element)
{
	 insertion ++;
	queue[insertion]=element;
	
	
}

int pop()
{
	++deletion;
int	deletedElement=queue[deletion];

				
				return deletedElement;
				
}

int display()
{
	printf("the inserted elements are\n");
	int i;
					for(i=0;i<=insertion;i++){
						printf("%d\n",queue[i]);
}
return 0;
}
