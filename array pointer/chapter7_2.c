#include<stdio.h>

int main(){
    int toy[3] = {25, 78, 99};
    int *ptr = &toy[0];
    for(int i=0; i<3; i++){
        printf("the value : %d\n", *ptr);
        printf("The address of ptr : %u\n", &*ptr);
        *ptr++;
    }

    return 0;
}