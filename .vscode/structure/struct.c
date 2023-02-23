#include<stdio.h>
#include <string.h>

struct facebook{
    char fname[15];
    int code;
    char fcity[15];
};

int main(){
    struct facebook b1, b2, b3;
    strcpy(b1.fname, "Vidya kumari");
    b1.code = 45123;
    strcpy(b1.fcity,"pandu");
    strcpy(b2.fname, "golul");
    b2.code = 769;
    strcpy(b2.fcity,"patna");
    strcpy(b3.fname,"acer");
    b3.code = 8654;
    strcpy(b3.fname, "hari");
    b3.code = 6899;
    strcpy(b3.fcity,"delhi");
    printf("Name of b1 is %s\n", b1.fname);
    printf("Name of b2 is %s\n", b2.fname);
    printf("Name of b3 is %s\n", b3.fname);
    printf("Name of b1 is %d\n", b1.code);
    printf("Name of b2 is %d\n", b2.code);
    printf("Name of b3 is %d\n", b3.code);
    printf("Name of b1 is %s\n", b1.fcity);
    printf("Name of b2 is %s\n", b2.fcity);
    printf("Name of b3 is %s\n", b3.fcity);

    return 0;
}