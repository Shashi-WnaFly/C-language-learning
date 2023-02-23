# include<stdio.h>
int main(){
    float radius, pi = 3.14;
    printf("Enter the radius of your circle.\n");
    scanf("%fcm", &radius);
    printf("The area of your circle is %fcm*cm", pi * radius * radius);
    return 0;
}