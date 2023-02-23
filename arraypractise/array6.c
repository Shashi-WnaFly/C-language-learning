#include<stdio.h>

int main(){
    int table[3][10], i, j, k;
    int num[3];
    printf("Please enter the number\n");
    // for(i=0 ; i<3; i++){
        scanf("%d %d %d", &num[0], &num[1], &num[2]);
    // }
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<10 ; j++){
            table[i][j] = num[i]*(j+1);
            printf("%d X %d = %d\n", num[i], j+1, table[i][j]);
        }
        printf("\n");
    }
    return 0;
}