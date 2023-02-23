#include <stdio.h>
int main()
{
    int num, i = 2, prime = 1;
    printf("Enter any number you want\n");
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            i++;
            prime = 0;
            break;
        }
    }
        if (prime == 0)
        {
            printf("%d is a not prime number\n", num);
        }
        else(printf("%d is  a prime number\n", num));
               
    return 0;
}