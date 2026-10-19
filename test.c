#include<stdio.h>
#include<stdlib.h>

void main(){


    int a =10, b=20;
    for( a; a <=b; a++){
        printf("the value of a is", a);
    }
    return 0;


void logger(){
    printf("logger function");
}

void adder(int a, int b){
  return a + b;
}
void multiplier(int a, int b){
  return a*b;
}
