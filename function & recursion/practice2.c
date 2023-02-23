#include<stdio.h>
float average( a,  b,  c);
int main(){
    int a, b, c;
    printf("Please enter three number to get its average\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float d = average(a, b, c);
    printf("The average of three digits are %f\n", d);
    return 0;
}

float average(int a, int b, int c){
    float d;
    d = (float)(a+b+c)/(float)3;
    return d;
}