#include<stdio.h>
int main(){
    int a;
    printf("Enter a number.\n");
    scanf("%d", &a);

    (a>10)? printf("This number is greater than 10.\n") : printf("This number is less than 10.\n");
    return 0;
}