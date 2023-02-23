// #include<stdio.h>
// void goodmorning();
// void goodafternoon();
// void goodnight();
// int main(){
//     goodnight();
    
//     return 0;
// }
//   void goodmorning(){
//     printf("This is goodmorning\n");
//     goodafternoon();
//   }  
//   void goodafternoon(){
//     printf("This is goodafternoon\n");
//   }  
//   void goodnight(){
//     printf("This is goodnight\n");
//     goodmorning();

//   }  

// #include<stdio.h>
// int sum(int a, int b);
// int main(){
//     sum(2, 9);
// return 0;
// }

// int sum(int a, int b){
//     int add;
//     add = a+b;
//     printf("%d", add);
//     return add;
// } 

// #include<stdio.h>
// int change(int a);
// int main(){
//     int b=122, a;
//     printf("before change of %d\n", b);
//     change(223);
//     printf("after change of %d\n", b);
//     return 0;
// }
// int change(int a){
//     a=566;
//     printf("This is the a %d\n", a);
//     return a;
// }

#include<stdio.h>
#include<math.h>
int square(int side);
int main(){
    int side;
    printf("Enter the side of your square\n");
    scanf("%d", &side);
    square(side);
    return 0;
}

int square(int side){
    printf("The area of your square is %f\n", pow(side, 2));
}