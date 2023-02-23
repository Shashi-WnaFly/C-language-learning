#include<stdio.h>
int main(){
    int i=10;
    printf("Table of 10 in reverse order.\n");
    while(i>0){
        printf("10 X %d = %d\n", i, 10*i);
        i--;
    }

    return 0;
}