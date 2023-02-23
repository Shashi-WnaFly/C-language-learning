#include<stdio.h>

int main(){
    int multi[3][10], i, j, k;
    int num[3] = {2, 7, 9};
    for(i=0; i<3; i++){
        for(j=0; j<10; j++)
        {
        multi[i][j] = num[i]*(j+1);
        printf("%d X %d = %d\n", num[i], j+1, multi[i][j]);
        }
    printf("\n");
    }
    return 0;
}