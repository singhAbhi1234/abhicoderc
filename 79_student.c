#include <stdio.h>

typedef struct{
char id[12];
char name[50];
int year;
char grade;
}student;

void increase_grade(student*);
void decrease_grade(student*);
void print_stu(student);

int main(){
  student stu1={.grade='A',.id="100",.name="rama",.year=2011};
  student stu2={.grade='B',.id="101",.name="hari",.year=2022};
  student stu3={.grade='F',.id="102",.name="krishna",.year=2012};
 print_stu(stu1);
 print_stu(stu2);
 print_stu(stu3);
 increase_grade(&stu3);
 decrease_grade(&stu2);
 print_stu(stu1);
 print_stu(stu2);
 print_stu(stu3);
}

void increase_grade(student *stu){
stu->grade--;
}

void decrease_grade(student *stu){
stu->grade++;
}

void print_stu(student stu){
printf("the student id is:%s,name is:%s,passing year is:%d and grade is:%c\n",stu.id,stu.name,stu.year,stu.grade);
}
