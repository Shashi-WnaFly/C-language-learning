#include<stdio.h>

int main(){
    int n_student = 3;
    int s_student = 5;
    int marks[3][5];
    for(int i=0; i<n_student; i++){
        for(int j=0; j<s_student; j++){
            printf("Enter the marks of %d student in subs %d \n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(int i=0; i<n_student; i++){
        for(int j=0; j<s_student; j++){
            printf("The marks of %d student in subs  %d is : %d\n", i+1, j+1, marks[i][j]);
        }
    }

    return 0;
}