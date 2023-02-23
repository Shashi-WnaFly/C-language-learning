# include<stdio.h>
int main(){
    int a;
    printf("Enter a num and i tell you that entry is even or odd.\n");
    scanf("%d", &a);

    if(a%2==0){
        printf("This number is even.\n");
    }
    else{
        printf("This number is odd.\n");
    }
    return 0;
}