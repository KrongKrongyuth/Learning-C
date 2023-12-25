#include <stdio.h>
#include <math.h>

int main(){

    double r;

    printf("\n**************************************************");
    printf("\nWelcome to the circle calculator program");
    printf("\n**************************************************\n");
    printf("\nPlease give me the radius of your circle : ");
    scanf("%lf", &r);

    double circle_circume = 2 * M_PI * r;
    // Circle circumeference formula = 2*pi*r

    double circle_area = M_PI * pow(r, 2);
    // Circle area formula = pi*r^2

    double circle_diameter = 2 * r;
    // Circle diameter formula = 2*r

    printf("\n**************************************************");
    printf("\nYour circle circumeference is %.4lf", circle_circume);
    printf("\n**************************************************");
    printf("\nYour circle area is %.4lf", circle_area);
    printf("\n**************************************************");
    printf("\nYour circle diameter is %.4lf", circle_diameter);
    printf("\n**************************************************\n");
    printf("\n********** Thanks! for using my program :) **********\n\n");

    return 0;
}