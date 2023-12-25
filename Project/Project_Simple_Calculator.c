#include <stdio.h>

int main(){

    char operator;
    double x, y, z;

    printf("\n**************************************************");
    printf("\nWelcome to the Simple Calculator program");
    printf("\n**************************************************\n");
    printf("\nPlease enter your operator that you need (+, -, *, /) : ");
    scanf(" %c", &operator);
    printf("\nPlease enter x value : ");
    scanf("%lf", &x);
    printf("\nPlease enter y value : ");
    scanf("%lf", &y);

    switch (operator)
    {
    case '+' :
        z = x + y;

        printf("\n**************************************************");
        printf("\nThe result of %lf + %lf is %lf",x, y, z);
        printf("\n**************************************************\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
        break;
    case '-' :
        z = x - y;

        printf("\n**************************************************");
        printf("\nThe result of %lf - %lf is %lf",x, y, z);
        printf("\n**************************************************\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
        break;
    case '*' :
        z = x * y;

        printf("\n**************************************************");
        printf("\nThe result of %lf + %lf is %lf",x, y, z);
        printf("\n**************************************************\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
        break;
    case '/' :
        z = x / y;

        printf("\n**************************************************");
        printf("\nThe result of %lf / %lf is %lf",x, y, z);
        printf("\n**************************************************\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
        break;
    default:
        printf("\nMaybe something gone worong please check your input and try again\n\n");
        break;
    }

    return 0;
}