#include <stdio.h>
float max(float,float);

int main()
{
  float maximum=max(56.745,89.587);
  printf("The max number is %f\n",maximum);
}

float max(float a,float b){
  if(a>b){
    return a;
  }else
  return b;
}