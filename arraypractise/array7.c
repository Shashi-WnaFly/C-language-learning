#include<stdio.h>

int main(){
    int bhai[2][2][2], j, k, i;
    int *ptr = &bhai[2][2][2];
    printf("Please enter the numbers : ");
    for(i = 0; i<2 ; i++){
        for(j = 0; j<2 ; j++){
            for(k = 0; k<2 ; k++){
                scanf("%d", &bhai[i][j][k]);
            }
        }
    }
    for(i = 1; i>=0 ; i--){
        for(j = 1; j>=0 ; j--){
            for(k = 1; k>=0 ; k--){
                printf("%u\n", &bhai[i][j][k]);
            }
        }
    }
    // for(k = 1; k>=0 ; k--){
    //     for(j = 1; j>=0 ; j--){
    //         for(i = 1; i>=0 ; i--){
    //             printf("%u\n", &bhai[k][j][i]);
    //         }
    //     }
    // }

    return 0;
}