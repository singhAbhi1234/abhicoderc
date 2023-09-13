#include<conio.h>
#include<stdio.h>
/*
*below is prototype decleartion of funtion.
*/
void push(int);
int pop();
void displayStackElement(void);
bool isStackOverFlow(void);
bool isStackUnderFlow(void);
int getMax();
void printerBox(int);
unsigned long digitsLenth(unsigned long);

/* stack declaration*/
int stackSize=3;
int stack[3]; 

int top=-1;
int choise;
int main(){
	printf("\nStack Application has started, Hi sapna Welome to Bangaluru ):\n");
	while(1){
	
		printf("################ Select From Below Menu ######################\n");
		printf("\n	Press 1. for Push ");
			printf("\n	Press 2. for Pop ");
				printf("\n	Press 3. for Display ");
					printf("\n	Press 4. for Exit ");
		printf("\n##############################################################");
							printf("\n	Please enter yo choise\n");
scanf("%d",&choise);
//printf("\ncurently top vale is: %d \n",top);
		switch(choise){
			case 1:
				
				if(isStackOverFlow()){
					int element;
						printf("\n	Please enter your element:\n");
						scanf("%d",&element);
					push(element);
				}
				else{
					
					printf("\n	There is no chance to puch into stack now, stackOverFlow.\n");
				}
				
				break;
			case 2:
				if(isStackUnderFlow()){
				int deletedValue=pop();	
				printf("\n deleted value is : %d .\n",deletedValue);

				}else{
				printf("\n	There is no chance to pop element from stack now, stackUnderFlow.\n");

				}
				
				break;
			case 3: 
			     displayStackElement();
			     break;
			case 4: return 0;
			default:
				printf("\n	There is no such choise\n");
		}
}
	return 0;
}

bool isStackOverFlow(){
	if(top<stackSize){
		return true;
	}
	return false;
}

bool isStackUnderFlow(){
	if(top==-1){
		return false;
	}
	return true;
}

void push(int element){
	top++;
	stack[top]=element;
}
int pop(){
	int deletedValue=stack[top];
	//printf("sfsdgfsg %d %d",stack[top],deletedValue);
	top--;
	return deletedValue;
}

void displayStackElement(){
	int maxFromstack=getMax();
	int leg=digitsLenth(maxFromstack);
	printf("%d %d ",maxFromstack, leg);
	for(int i=0;i<=top;i++){
		if(i==0){
			printf("\n+");
			printerBox(digitsLenth(getMax()));
			printf("+");
		}
		printf("\n|%d|", stack[i]);
			printf("\n+");
			printerBox(digitsLenth(getMax()));
			printf("+");

	}
	printf("\n");
}

int getMax() 
{ 
    int max = 0;  
    for (int i1 = 0; i1 <= top; i1++){
        if(max<stack[i1]){
        	max=stack[i1];
		}
    }
    return max;  
} 

void printerBox(int length){
	for(int i=0;i<=length;i++){
		//printf("-");
	}
	
}
 int digitsLenth(int n) 
{ 
   int count = 0;
    
    while(n>0){
        count++;
        n = n/10;
    }
    return count;
} 

