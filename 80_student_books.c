#include <stdio.h>

typedef struct
{
  char titlt[30];
  char author[20];
  float price;
}Book;

typedef struct{
char id[12];
char name[50];
int year;
char grade;
int no_Of_Books;
Book borrow_books[3];
}student;
void print_stu(student);
void print(Book*);

int main(){
  student stu1={.grade='A',
                .id="100",
                .name="rama",
                .year=2011,
                .no_Of_Books=2,
                .borrow_books={{.author="chetan bhagat",.price=555.5,.titlt="one Indian girl"},{.author="peter chen",.price=545.5,.titlt="parasite"}}};

  print_stu(stu1);
}

void print_stu(student stu){
printf("the student id is:%s,name is:%s,passing year is:%d and grade is:%c\n",stu.id,stu.name,stu.year,stu.grade);
int i;
printf("the borroe books are\n");
for(i=0;i<stu.no_Of_Books;i++){
print(&stu.borrow_books[i]);
}
}

void print(Book *book){
 printf("title:%s, author:%s, price:%.2f\n",book->titlt,book->author,book->price);
}
