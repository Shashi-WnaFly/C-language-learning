# include<stdio.h>
int main(){
  int length, breadth;
  int area = length*breadth;
  printf("Enter the value of rectangle length \n");
  scanf("%d", &length);
  printf("Enter the value of rectangle breadth \n");
  scanf("%d", &breadth);
  printf("Area of rectangle of given value is %d", length*breadth);
    return 0;
}