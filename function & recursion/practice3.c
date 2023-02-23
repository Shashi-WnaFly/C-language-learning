#include<stdio.h>
float farenheit(cel);
int main(){
    int celcius;
    printf("Please enter the value of celcius\n");
    scanf("%d", &celcius);
    float v=farenheit(celcius);
    printf("The farenheit value of %d is %f\n", celcius, v);

    return 0;
}

float farenheit(cel){
   float far = cel*9/5 + 32;
    return far;
}