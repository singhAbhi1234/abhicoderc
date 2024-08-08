#include <stdio.h>

struct Student
{
  int rollno;
  char name[20];
  float marks;

};
void print_stu(struct Student );
void print_stu1(struct Student* );
int main(){
  struct Student stu={1,"abhi",96.4};
   printf("rollno: %d,name: %s,marks: %.2f",stu.rollno,stu.name,stu.marks);
   printf("\nInside call by value function\n");
print_stu(stu);
printf("\nAfter call by value function\n");
 printf("rollno: %d,name: %s,marks: %.2f",stu.rollno,stu.name,stu.marks);
 printf("\nInside call by reference function\n");
 print_stu1(&stu);
 printf("\nAfter call by reference function\n");
printf("rollno: %d,name: %s,marks: %.2f",stu.rollno,stu.name,stu.marks);
}

//call by value

void print_stu(struct Student stu){
  stu.rollno=2;
  printf("rollno: %d,name: %s,marks: %.2f",stu.rollno,stu.name,stu.marks);
}

void print_stu1(struct Student *stu){
  stu->rollno=3;
printf("rollno: %d,name: %s,marks: %.2f",stu->rollno,stu->name,stu->marks);
}