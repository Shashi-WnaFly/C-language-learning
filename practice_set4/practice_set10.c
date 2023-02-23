#include <stdio.h>
int main()
{
    int i = 2, n, prime = 1;
    printf("Enter any number you want\n");
    scanf("%d", &n);
for(i; i<n; i++){
    if(n%i==0){
        printf("This is not a prime number\n");
        break;
    }
    else{
        printf("This is a prime number\n");
    }
}
    return 0;
}
    // do
    // {
    //     if (n % i == 0)
    //     { // fal
    //         prime = 0;
    //         break;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // } while (i < n);
    // if (prime == 0)
    // {
    //     printf("%d is not a prime number\n", n);
    // }
    // else
    //     printf("%d is a prime number\n", n);
// }