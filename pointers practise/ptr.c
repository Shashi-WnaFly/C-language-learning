#include<stdio.h>

int main(){
    int value = 100;
    int *avalue = &value;
    
    printf("the value of value is : %d\n", value);
    printf("the value of value is : %d\n", *(&value));
    printf("the value of value is : %d\n", *avalue);
    printf("the value of value is : %x\n", avalue);
    printf("the value of value is : %x\n", &value);
    printf("the value of value is : %d\n", *(&value));

    return 0;
}