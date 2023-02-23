#include<stdio.h>

int main(){
    int i = 55;
    int *ptr = &i;
    int **kptr = &ptr;
    printf("%x\n", *kptr);
    printf("%x", kptr);
    return 0;
}