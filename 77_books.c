#include <stdio.h>

typedef struct
{
  char titlt[30];
  char author[20];
  float price;
}Book;

void print(Book*);

int main()
{
Book book[3]={{.author="chetan bhagat",.price=555.5,.titlt="one Indian girl"},{.author="peter chen",.price=545.5,.titlt="parasite"},{.author="khoosal",.price=523.5,.titlt="meghdootam"}};
int i;
for(i=0;i<3;i++)
{
print(&book[i]);
printf("\n");
}
}


void print(Book *book){
 printf("title:%s, author:%s, price:%.2f",book->titlt,book->author,book->price);
}