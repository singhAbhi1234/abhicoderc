#include <stdio.h>
int main()
{
float a,b;
int choice;
printf("Enter first number\n");
scanf("%f",&a);
printf("Enter second number\n");
scanf("%f",&b);

while (1)
{
 printf("##############Please enter your choice##################\n");
 printf("1. addition\n");
 printf("2. subtraction\n");
 printf("3. multiplication\n");
 printf("4. division\n");
 printf("5. exit\n");

 scanf("%d",&choice);
 switch (choice)
 {
 case 1:
 printf("Addition of numbers is %f\n",a+b);
  break;
  case 2:
   printf("subtraction of numbers is %f\n",a-b);
  break;
  case 3:
   printf("multiplication of numbers is %f\n",a*b);
  break;
  case 4:
   printf("division of numbers is %f\n",a/b);
  break;
  case 5:
  exit(0);
 default:
 printf("Invalid Input\n");
  break;
 }


}

}