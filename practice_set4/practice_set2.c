#include<stdio.h>
int main(){
    int a = 1, b;
    printf("****Enter a number****\n");
    scanf("%d", &b);
    while(a<=10){
        printf("%d X %d = %d\n", b, a, a*b);
        a++;
    }
    return 0;
}