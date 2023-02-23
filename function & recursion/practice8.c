#include<stdio.h>
int pattern(int p);
int main(){
    int p;
    printf("Enter any number to print pattern\n");
    scanf("%d", &p);
    pattern(p);
    return 0;
}

int pattern(int p){
    if(p==1){
        printf("*\n");
        return;
    }
    pattern(p-1);
        for(int i=0;i<(2*p-1); i++){
            printf("*");
    }
        printf("\n");
}