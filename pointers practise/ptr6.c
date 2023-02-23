#include<stdio.h>

int calva(int a);
int main(){
    int a = 5;
    printf("before the function calling %d\n", a);
    calva(a);
    printf("after the function calling %d", a);
    return 0;
}
int calva(int a){
     a=12;
     return a;
    }
