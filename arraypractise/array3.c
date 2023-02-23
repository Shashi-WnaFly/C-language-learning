#include<stdio.h>

int main(){
    int multi[10], g;
    printf("Enter the value of table\n");
    scanf("%d", &g);
    for(int i=0; i<10; i++){
        multi[i] = (i+1)*g;
        printf("%d X %d = %d\n", g, i+1, multi[i]);
    }
    return 0;
}