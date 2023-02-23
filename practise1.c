#include <stdio.h>
int main()
{
    int principle = 500, rate = 5, years = 2;
    int simpleInterest = (principle * rate * years / 100);
    printf("The simpleInterest of given data is %d", simpleInterest);
    return 0;
}