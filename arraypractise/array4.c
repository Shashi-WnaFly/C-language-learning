#include<stdio.h>
int posint(int s[]);
int main(){
    int num[10];
    printf("Enter the number please\n");
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    posint(num);
    return 0;
}
int posint(int s[0]){
    int counts = 0;
    for(int i=0; i<10; i++){
        s[i];
        if(s[i]%2==0){
            counts++;
        }
    }
    printf("Your positive inputs are : %d", counts);
}