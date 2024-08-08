#include <stdio.h>
double square(float);
int main(){
  float n;
  printf("Enter the number\n");
  scanf("%f",&n);
  printf("The square id %lf",square(n));


}

double square(float a){
return a*a;
}