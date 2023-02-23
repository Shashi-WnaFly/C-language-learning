#include<stdio.h>

int main(){
    int narray=0, i;
    char st[] = "Mynameisshashianand";
    for(i=0;st[i]!='\0';i++){
        printf("%c", st[i]);
        narray++;
    }
    printf("The length of array st is : %d", narray);
    return 0;
}