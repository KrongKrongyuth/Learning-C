#include <stdio.h>
#include <math.h>

int main(){

    char from_unit, to_unit;
    double temp;

    printf("\n**************************************************");
    printf("\nWelcome to the Temperature Conversion program");
    printf("\n**************************************************\n");
    printf("\nPlease enter your temperature unit (C, F, K) : ");
    scanf(" %c", &from_unit);
    printf("\nPlease enter the temperature unit that you need to change to (C, F, K) : ");
    scanf(" %c", &to_unit);
    printf("\nPlease enter your temperature : ");
    scanf("%lf", &temp);

    double C_to_K = temp + 273.15;
    double K_to_C = temp - 273.15;
    double F_to_C = (temp - 32.0)/(9.0/5.0);
    double C_to_F = temp*(9.0/5.0) + 32;
    double F_to_K = (temp - 32.0)/(9.0/5.0) + 273.15;
    double K_to_F = (9.0/5.0) * (temp - 273.15) + 32.0;

    switch (from_unit)
    {
    case 'C' :
        switch (to_unit)
        {
        case 'K' :
            printf("\n**************************************************");
            printf("\nTemperature is %.2lf Kelvin",C_to_K);
            printf("\n**************************************************\n");
            printf("\n********** Thanks! for using my program :) **********\n\n");
            break;
        case 'F' :
            printf("\n**************************************************");
            printf("\nTemperature is %.2lf Fahrenheit",C_to_F);
            printf("\n**************************************************\n");
            printf("\n********** Thanks! for using my program :) **********\n\n");
            break;
        default:
            printf("\nSomething gone wrong please check your input (may be your unit that you need to convert to has a problem)\n\n");
            break;
        }
        break;
    case 'K' :
        switch (to_unit)
        {
        case 'C' :
            printf("\n**************************************************");
            printf("\nTemperature is %.2lf Celsius",K_to_C);
            printf("\n**************************************************\n");
            printf("\n********** Thanks! for using my program :) **********\n\n");
            break;
        case 'F' :
            printf("\n**************************************************");
            printf("\nTemperature is %.2lf Fahrenheit",K_to_F);
            printf("\n**************************************************\n");
            printf("\n********** Thanks! for using my program :) **********\n\n");
            break;
        default:
            printf("\nSomething gone wrong please check your input (may be your unit that you need to convert to has a problem)\n\n");
            break;
        } 
        break;
    case 'F' :
        switch (to_unit)
        {
        case 'C' :
            printf("\n**************************************************");
            printf("\nTemperature is %.2lf Celsius",F_to_C);
            printf("\n**************************************************\n");
            printf("\n********** Thanks! for using my program :) **********\n\n");
            break;
        case 'K' :
            printf("\n**************************************************");
            printf("\nTemperature is %.2lf Kelvin",F_to_K);
            printf("\n**************************************************\n");
            printf("\n********** Thanks! for using my program :) **********\n\n");
            break;
        default:
            printf("\nSomething gone wrong please check your input (may be your unit that you need to convert to has a problem)\n\n");
            break;
        } 
        break;
    default:
        printf("\nSomething gone wrong please check your input (may be your unit of your temperature has a problem)\n\n");
        break;
    }

    return 0;
}