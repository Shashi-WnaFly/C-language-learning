#include<stdio.h>
int fibonacci(int fib);
int main(){
    int fib;
    printf("To calculate fibonacci series, Enter a number\n");
    scanf("%d", &fib);
    printf("The fibonacci series of your number is %d", fibonacci(fib));
    return 0;
}

int fibonacci(int fib){
   fib= fibonacci(fib-1) + fibonacci(fib-2);
   return fib;
}