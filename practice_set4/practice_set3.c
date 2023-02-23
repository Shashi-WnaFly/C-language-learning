#include <stdio.h>
int main()
{
    int a = 1, num, fac =1;
    printf("Enter a number to find its factorial.\n\n");
    scanf("%d", &num);

    while(a<=num){
        fac *= a;
        a++;
    }
        printf("The factorial of the number %d is %d\n\n", num, fac); 
    return 0;
}