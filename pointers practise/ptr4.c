#include<stdio.h>
#include<conio.h>

int funda(int *c, int *d);

int main(){
    int a, b;
    int *ptra = &a;
    int *ptrb = &b;
    float average;
    printf("Enter two numbers please : ");
    scanf("%d %d", &a, &b);
    funda(ptra,ptrb);
    return 0;
}
int funda(int *c, int *d){
    int sum = *c + *d;
    float av = (*c + *d)/2;
    printf("The sum and average of your input are : %d : %.1f", sum, av);
}