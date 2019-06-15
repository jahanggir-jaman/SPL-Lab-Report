// Write a program to find area of a Circle

#include<stdio.h>

int main(){
   float radius, area;

   printf("Enter the radius of Circle : ");
   scanf("%f", &radius);

   area = 3.14 * radius * radius;
   printf("\nArea of Circle : %f", area);

   return 0;
}
