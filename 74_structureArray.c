#include <stdio.h>

struct date inputDate();
void showDate(struct date);
struct date
{
  int d,m,y;
};


int main(){
struct date dob[4];

int i;
printf("Enter date of birth of 4 student\n");
for(i=0;i<=3;i++){
  dob[i]=inputDate();
}
printf("the date of birth are:");
for(i=0;i<4;i++){
 showDate(dob[i]);
}


}


struct date inputDate(){
  struct date d1;
scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
return d1;
}

void showDate(struct date d1){
  
printf("%d-%d-%d\n",d1.d,d1.m,d1.y);
}