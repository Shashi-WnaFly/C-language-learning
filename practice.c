#include<stdio.h>

int swap(int *aa, int *bb);

int main(){
    int f = 5, b = 6;
    int *ptra = &f, *ptrb = &b;
    printf("The value before swap of a and b is : %d and %d\n", f, b);
    swap(ptra, ptrb);
    printf("The value after swap of a and b is : %d and %d\n", f, b);

    return 0;
}
int swap(int *aa, int *bb){
    int n;
    n = *aa;
    *aa = *bb;
    *bb = n;
}