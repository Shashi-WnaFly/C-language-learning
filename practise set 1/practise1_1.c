# include<stdio.h>
int main(){
    float length, breadth;
    printf("Enter the length of your rectangle.\n");
    scanf("%f", &length);
    printf("Enter the breadth of your rectangle.\n");
    scanf("%f", &breadth);
    printf("The area of your rectangle is %f", length * breadth);
    return 0;
}
