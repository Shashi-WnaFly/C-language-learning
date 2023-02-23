#include<stdio.h>
int main(){
    int i = 1, sum=0;
    printf("sum of table of 8\n\n");
    while(i<=10){
        printf("8 X %d = %d\n", i, 8*i);
        sum += 8*i;
        i++;
    }
        printf("sum of table of 8 is %d", sum);
    return 0;
}