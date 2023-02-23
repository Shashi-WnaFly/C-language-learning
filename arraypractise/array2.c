#include<stdio.h>

int main(){
    int multi[10];
    for(int i=0; i<10; i++){
        multi[i] = (i+1)*5;
        printf("%d X %d = %d\n", 5, i+1, multi[i]);
    }
    return 0;
}