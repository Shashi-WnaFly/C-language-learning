#include<stdio.h>
void printarray(int *i, int n);
int main(){
    int i[] = {34, 89, 62, 87, 42};
    int *ptr = &i[0];
    printarray(ptr, 5);
    return 0;
}
void printarray(int *i, int n){
    for(int j=0; j<n; j++)
        printf("the value of element %d is %d\n", j+1, *(i+j));
    
}