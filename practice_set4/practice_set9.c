#include<stdio.h>
int main(){
    int i, n, prime =1;
    printf("Enter any number you want\n");
    scanf("%d", &n);
    for(i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
        printf("%d is not a prime number\n", n);
    }
    else{
        printf("%d is a prime number\n", n);
    }
    return 0;
}