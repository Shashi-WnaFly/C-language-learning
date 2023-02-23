# include<stdio.h>
int main(){
    char z;
    printf("Enter an alphabet and I will tell you it is lowercase or uppercase\n");
    scanf("%c", &z);
    if(z<=90 && z>=65){
        printf("It is Uppercase\n");
    }
    else{
        printf("It is Lowercase\n");
    }
    return 0;
}