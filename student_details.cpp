#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[30];
    int rollno;
    int age;
    int std;
    
};

main()
{
    
    int choise;
    int i=0;
    int n=1;
        struct student* ptr;
                ptr =(struct student*)calloc(n,sizeof(struct student));
                if(ptr==NULL){
                    printf("Memory creation failed\n");
                    
                }
                else{
                    printf("Memory created successful\n");
                }
    while(1){
        printf("\n############################  Enter your choise  #############################\n");
    
        printf("press 1. for enter student Details\n");
            printf("press 2. for display student Details\n");
                printf("press 3. for exit\n");
                    printf("\n***********************************************************************\n");
                scanf("%d",&choise);
                switch(choise){
                    case 1:
                        
            n++;
                    ptr=(struct student*)realloc(ptr,n*sizeof(struct student));
                    if(ptr==NULL){
                    printf("Memory creation failed\n");
                    
                }
                else{
                	 printf("start writing all the reqired value below. \n");
                	 
                	 printf("please enter stdent name: \n");
                    scanf("%s",&ptr[i].name);
                     printf("please enter stdent roll-no: \n");
                     scanf("%d",&ptr[i].rollno);
                     printf("please enter stdent age: \n");
                      scanf("%d",&ptr[i].age);
                       printf("please enter stdent std: \n");
                    scanf("%d",&ptr[i].std);
                    printf("\nname= %s",ptr[i].name);
                    printf("\nroll= %d",ptr[i].rollno);
                    printf("\nage= %d",ptr[i].age);
                    printf("\nstd= %d",ptr[i].std);
                    printf("\n");
                    
                }
            
            i++;
                 
                 break;
                 case 2:
                     for(i=0;i<n;i++){
                         printf("%s %d %d %d \n",ptr[i].name,ptr[i].rollno,ptr[i].age,ptr[i].std);
                         
                     }
                    break;
                    case 3:
					return 0;
					default:
					printf("there is no such choice"); 
                }
    
        
    }
}
