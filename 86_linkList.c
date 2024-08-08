#include <stdio.h>
#include <stdlib.h>

struct node{
  int item;
  struct node *next;
};
void add_node(struct node**,int);

int main(){
  struct node *start=NULL;
  add_node(&start,35);
  add_node(&start,39);
  add_node(&start,45);
  add_node(&start,99);
struct node *ptr=start;
  while(ptr!=NULL){
    printf("%d ",ptr->item);
    ptr=ptr->next;
  }
}

void add_node(struct node **start,int item){
struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->item=item;
  temp->next=NULL; 
if(*start==NULL){
 *start=temp;
}else{
  struct node *n;
  n=*start;
  while(n->next!=NULL){
    n=n->next;
  }
    n->next=temp;

}
}

