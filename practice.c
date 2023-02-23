#include<stdio.h>

int swap(int *aa, int *bb);

int main(){
    int a = 5, b = 6;
    int *ptra = &a, *ptrb = &b;
    printf("The value before swap of a and b is : %d and %d\n", a, b);
    swap(ptra, ptrb);
    printf("The value after swap of a and b is : %d and %d\n", a, b);

    return 0;
}
int swap(int *aa, int *bb){
    int n;
    n = *aa;
    *aa = *bb;
    *bb = n;
}