#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
  char manufectured_by[25];
  char model[25];
  int year;
  char color[10];
}Car;

void print_car(Car*);
void input_car(Car*);

int main(){
  Car *car;
  car=(Car*)malloc(sizeof(Car));
  if(car==NULL){
    printf("memory not allocated\n");
    return 1;
  }
input_car(car);
print_car(car);
free(car);
car=NULL;
}

void input_car(Car *car){
printf("Enter car manufectured company name\n");
fgets(car->manufectured_by,25,stdin);
car->manufectured_by[strlen(car->manufectured_by)-1]=0;
printf("Enter car model\n");
scanf(" %s",car->model);
printf("Enter car issue year\n");
scanf("%d",&(car->year));
printf("Enter car color\n");
scanf(" %s",car->color);
while(getchar()!='\n');
}

void print_car(Car *car){
  printf("company name:%s,model:%s,year:%d,color:%s\n",car->manufectured_by,car->model,car->year,car->color);
 
}

