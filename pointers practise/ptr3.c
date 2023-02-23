#include <stdio.h>

int varchange(int *n);
int main()
{
    int va = 34;
    int *ptrva = &va;
    for (int i = 1; i < 11; i++)
    {
        // printf("%d\n", va);
        varchange(ptrva);
        va++;
    }

    return 0;
}
int varchange(int *n)
{
    printf("%d\n", *n);
}