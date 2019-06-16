// Find Roots of a Quadratic Equation

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c\n");
    printf("a: ");
    scanf("%lf",&a);
    printf("b: ");
    scanf("%lf",&b);
    printf("c: ");
    scanf("%lf",&c);

    discriminant = b*b-4*a*c;

    // condition for real and different roots
    if (discriminant > 0)
    {
        // sqrt() function returns square root
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);

        printf("Root1 = %.2lf and Root2 = %.2lf",root1, root2);
    }

    //condition for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);

        printf("Root1 = Root2 = %.2lf;", root1);
    }

    // if roots are not real
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
