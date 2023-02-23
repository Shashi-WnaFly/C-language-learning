#include <stdio.h>
#include <math.h>
int main()
{
    int chemistry, biology, math;
    float total;

    printf("Enter Your Chemistry marks.\n");
    scanf("%d", &chemistry);

    printf("Enter Your biology marks.\n");
    scanf("%d", &biology);

    printf("Enter Your math marks.\n");
    scanf("%d", &math);

    total = (chemistry + biology + math) / 3;

    if (total >= 33 && chemistry >= 33 && biology >= 33 && math >= 33)
    {
        printf("You are pass %f", total);
    }
    else
    {
        printf("you are fail.");
    }
    return 0;
}
