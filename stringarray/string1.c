#include<stdio.h>
#include<string.h>
int main(){
    char st[] = {'s','h','a','s','h','i','\0'};
    for(int i=0; i<7; i++){
        printf("%c",st[i]);
    }
    // printf("%s", st);
    return 0;
}