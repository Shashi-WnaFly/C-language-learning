#include<stdio.h>
int main(){
    int i;
    printf("Enter a year and I will tell you it is leap or not\n");
    scanf("%d", &i);
    if(i%4==0){
        printf("It is a leap year.\n");
    }
    else{
        printf("It is not a leap year.\n");
    }
    return 0;
}