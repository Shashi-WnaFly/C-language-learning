#include<stdio.h>
float force(float f);
int main(){
    int f;
    printf("Enter Your Age in kgs\n");
    scanf("%d",&f);
    printf("Your mass is equal to %.2f\n", force(f));
    return 0;
}

 float force(float f){
   f = (float)f*9.8;
   return f;
}