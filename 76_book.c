#include <stdio.h>

typedef struct
{
  char titlt[30];
  char author[20];
  float price;
}Book;

int main()
{
  Book b1={"one Indian girl","chetan bhagat",550.50};
  printf("title:%s, author:%s, price:%.2f",b1.titlt,b1.author,b1.price);
}
