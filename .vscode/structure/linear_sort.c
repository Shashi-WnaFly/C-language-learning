#include<stdio.h>
#include<conio.h>

int main(){
    int num[5], i, j, tmp;
    printf("Enter 5 numbers : \n");
    for(i=0;i<5;i++){
        scanf("%d", &num[i]);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(num[i]>num[j]){
                tmp=num[i];
                num[i]=num[j];
                num[j]=tmp;
            }
            else{}
        }
    }
    printf("ascending order sort\n");
    for(i=0;i<5;i++){
        printf("%d ", &num[j]);
    }
    return 0;
}