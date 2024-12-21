#include<stdio.h>
#include<math.h>

void main(){
    float a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    // condition for real and distinct roots
    if(discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Roots are real and distinct.\n");
        printf("Root1 = %f\n", root1);
        printf("Root2 = %f\n", root2);
    }
    // condition for real and equal roots
    else if(discriminant == 0){
        root1 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %f\n", root1);
    }
    // condition for complex roots
    else{
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-discriminant) / (2*a);

        printf("Roots are complex.\n");
        printf("Root1 = %f + %fi\n", realPart, imaginaryPart);
        printf("Root2 = %f - %fi\n", realPart, imaginaryPart);
    }

    getch();
}