#include<stdio.h>

int main(){
    int per[5] = {555,666,777,444,999};
    int *ptr = &per[0], i;
    for(i=0; i<5; i++){
        printf("The value of percentage is : %d\n", *ptr);
        printf("The address of ptr : %u\n", &*ptr);
        *ptr++;
    }
    return 0;
}