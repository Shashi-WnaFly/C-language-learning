#include<stdio.h>

int factorial(int a);

int main(){
    int a;
    printf("Enter any number to find factorial\n");
    scanf("%d", &a);
    printf("The factorial of your number is %d\n", factorial(a));
    return 0;
}

int factorial(int a){
    if(a==1 || a==0)
    return 1;
    else{
        return a*factorial(a-1);
    }
}