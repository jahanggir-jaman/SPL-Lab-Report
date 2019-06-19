#include <stdio.h>
void main() {
    int num1, num2, num3;

    printf("Input the values of three numbers seperated by a space: ");
    scanf("%d %d %d", &num1, &num2, &num3);

   if ((num1 > num2) && (num1 > num3))
            printf("The largest among three is %d \n", num1);

   if ((num2 > num3) && (num2 > num1))
        printf("The largest among three is %d \n", num2);

   if ((num3 > num1) && (num3 > num2))
           printf("The largest among the three numbers is %d \n", num3);

}

