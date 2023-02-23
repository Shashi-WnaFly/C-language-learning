#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks and see your grade.\n");
    scanf("%d", &marks);

    if(marks>90){
        printf("You achieve Grade 'A'.");
    }
    else if(marks>=80 && marks<90){
        printf("You achieve Grade 'B'.");
    }
    else if(marks>=70 && marks<80){
        printf("You achieve Grade 'C'.");
    }
    else if(marks>=60 && marks<70){
        printf("You achieve Grade 'D'.");
    }
    else if(marks<60){
        printf("So sorry You are 'fail'.");
    }
    return 0;
}