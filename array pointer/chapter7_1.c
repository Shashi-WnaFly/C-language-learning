#include<stdio.h>

int main(){
    int n_student[5];
    for(int i=0;i<5;i++){
        printf("Enter No.%d student marks.\n",i+1);
        scanf("%d",&n_student[i]);
    }
    for(int i=0;i<5;i++){
        printf("Marks of No.%d student is : %d\n",i+1, n_student[i]);
    }
    return 0;
}