# include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter four numbers and i tell you the greatest.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if(a>b && a>c && a>d){
        printf("Your greatest number is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("Your greatest number is %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("Your greatest number is %d", c);
    }
    else{
        printf("Your greatest number is %d", d);
    }
    return 0;
}