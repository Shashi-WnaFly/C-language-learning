#include<stdio.h>

int fibonacci(int n);

int main(){
    int n;
    printf("Please enter fibonacci no. \n");
    scanf("%d", &n);
    printf("The fibonacci series is %d\n", fibonacci(n));
    return 0;
}

int fibonacci(int n){
    int t0=0, t1=1, t2;
    if(n<=1){
        return 0;
    }
    for(int i = 1; i<n; i++){
        t2=t0+t1;
        t0=t1;
        t1=t2;
    }
    return t2;
    
}
