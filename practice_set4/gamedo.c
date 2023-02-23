#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int num, guess, nguesses=1;
    srand(time(0));
    num = rand()%100 + 1;
    printf("***Guess the number***\n");

    do{
        scanf("%d", &guess);
        nguesses++;
        if(guess>num){
            printf("Lower number please\n");
        }
        else if(guess<num){
            printf("Higher number please\n");
        }
        else{
            printf("You compete it in %d attempt", nguesses);
        }
    }while(guess!=num);
    return 0;
}