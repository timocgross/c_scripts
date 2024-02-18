#include <stdio.h>
#include <math.h>

int main(){
    double A1; double A2; double sideA;
    double B1; double B2; double sideB;
    double result;

    printf("Enter the x value of A: ");
    scanf("%lf", &A1);
    printf("Now the y value: ");
    scanf("%lf", &A2);
    printf("Enter the x value of B: ");
    scanf("%lf", &B1);
    printf("Now the y value: ");
    scanf("%lf", &B2);

    sideA = B1 - A1;
    sideB = B2 - A2;

    result = sqrt(sideA*sideA + sideB*sideB);
    printf("Points A and B are %.3lf length units away from each other.\n", result);

    return 0;
}
