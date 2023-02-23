#include<stdio.h>
int main(){
    float inc, tax;
    printf("Enter Your Income.\n");
    scanf("%f", &inc);

    float ten = (inc-250000)/100;
    if(inc<250000){
        printf("Your income tax amount is zero.");
    }

    else if(inc>250000 && inc<=500000){
        printf("Your income tax amount is to be paid is %f", (inc-250000)/100*5);
    }

    else if(inc>500000 && inc<=1000000){
        printf("Your income tax amount is to be paid is %f", (inc-500000)/100*10);
    }

    else if(inc>1000000 && inc<=2000000){
        printf("Your income tax amount is to be paid is %f", (inc-1000000)/100*20);
    }

    else if(inc>2000000){
        printf("Your income tax amount is to be paid is %f", (inc-2000000)/100*30);
    }
    return 0;
}