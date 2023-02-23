#include<stdio.h>
#include<string.h>
struct data{
    char name[20];
    int mob;
    float salary;
};

int main(){
    struct data facebook[3];
    for(int i=0;i<3;i++){
        printf("enter your name\n");
        gets(facebook[i].name); 
        printf("enter your mobile no.\n");
        scanf("%d", &facebook[i].mob);
        printf("enter your salary\n");
        scanf("%f",&facebook[i].salary);
        fflush(stdin);
    }
    for(int i=0;i<3;i++){
        printf("your name is : %s\n", facebook[i].name);
        printf("your mobile is : %d\n", facebook[i].mob);
        printf("your salary is %f\n",facebook[i].salary);
    }
    return 0;
}