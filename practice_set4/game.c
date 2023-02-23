#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess = -1, nguesses = 048;
    srand(time(0));
    num =  rand()%100 + 1;
    printf("%d\n", num);
    printf("***guess the number***\n");

    while (guess != num)
    {
        nguesses++;
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower number please\n");
        }
        else if (guess < num)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You compete in %d attempts", nguesses);
        }
    }
    return 0;
}