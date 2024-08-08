#include <stdio.h>
void fibonacci(int );

int a=0,b=1,n;
int main()
{
  printf("Enter the number\n");
  scanf("%d",&n);
  printf("%d\n",a);
   printf("%d\n",b);
   fibonacci(n-2);

}


void fibonacci(int n){
  if(n>0){
int temp=a+b;
  a=b;
  b=temp;
  printf("%d\n",temp);
  fibonacci(n-1);
  
  }
 
}

/*int fibonacci(int );
int main()
{
int term,i;
printf("Enter the no. of term\n");
scanf("%d",&term);
for(i=0;i<term;i++){
printf("%d\n",fibonacci(i));
}
}

int fibonacci(int pos){
if(pos<=1){
return pos;
}
return (fibonacci(pos-1) +fibonacci(pos-2));


}*/