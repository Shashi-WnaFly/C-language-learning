#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    printf("The sum of natural number is %d", sum(n));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
       int result = n + sum(n-1);
       return result;
   
}