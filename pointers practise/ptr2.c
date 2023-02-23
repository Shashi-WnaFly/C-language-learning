#include<stdio.h>
int add(int a);
int main(){
    int i = 344;
    int *ptri = &i;
    printf("%x\n", ptri);
    add(344);
    return 0;
}
int add(int a){
    printf("%x\n", &a);
    printf("%d\n", a);
}