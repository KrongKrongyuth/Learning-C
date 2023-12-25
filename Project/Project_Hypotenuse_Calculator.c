#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C;

    printf("\n**************************************************");
    printf("\nWelcome to the hypotenuse calculator program");
    printf("\n**************************************************\n");
    printf("\nPlease give me the length of A side : ");
    scanf("%lf", &A);
    printf("\nPlease give me the length of B side : ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("\n**************************************************");
    printf("\nThe hypotenuse length is %.4lf", C);
    printf("\n**************************************************\n");
    printf("\n********** Thanks! for using my program :) **********\n\n");

    return 0;
}