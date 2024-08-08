#include <stdio.h>
void print_date();

int main(){
print_date();
}

void print_date(){
  time_t t;
  time(&t);
  printf("the current date and time is %s\n",ctime(&t));

}