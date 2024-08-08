#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
  }Point;
void show_point(Point*);
void input_point(Point*);

int main()
{
  
Point *p1=(Point*)malloc(sizeof(Point));
Point *p2=(Point*)malloc(sizeof(Point));

 if(p1==NULL||p2==NULL){
  printf("memory not allocated\n");
  return 1;
 }

 printf("Enter the coordinates of point p1\n");
 input_point(p1);
 printf("Enter the coordinates of point p2\n");
  input_point(p2);
printf("the coordinates of point p1 is:\n");
show_point(p1);
printf("\nthe coordinates of point p2 is:\n");
show_point(p2);

free(p1);
free(p2);
p1=p2=NULL;

}

void input_point(Point *p){
  printf("Enter X-coordinates\n");
  scanf("%d",&(p->x));
   printf("Enter Y-coordinates\n");
  scanf("%d",&(p->y));
}

void show_point(Point *p){
  printf("x-coordinats=%d and y-coordinates is=%d",p->x,p->y);
}

