#include<stdio.h>
int main(){
    int i, n = 10, sum = 0;
    for(i=1; i<=n; i++){
        sum += i;
    }
        printf("Sum of the first ten natural number is %d\n", sum);
    return 0;
}