#include<stdio.h>
int main(){
    int i = 1, num, fac = 1;
    printf("Enter a number to find it's factorial.\n");
    scanf("%d", &num);
    while(i<=num){
        fac *= i;
        i++;
    }
        printf("factorial of %d is %d", num, fac);
    return 0;
}