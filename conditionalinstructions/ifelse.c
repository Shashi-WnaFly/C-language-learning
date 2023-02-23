# include<stdio.h>
int main(){
    int age;
    printf("Enter Your Age.\n");
    scanf("%d", &age);

    if(age<=18){
        printf("You are a student.\n");
    }

    else if(age>18 && age<=35){
        printf("You are a PhD student.\n");
    }

    else if(age>35 && age<=50){
        printf("You are achieving something.\n");
    }

    else if(age>50 && age<=80){
        printf("You are a expert in your field.\n");
    }

    else{
        printf("You are getting extra life.\n");
    }
    
    return 0;
}