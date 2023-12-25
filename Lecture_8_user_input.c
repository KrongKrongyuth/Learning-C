#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    char name[25];
    int age;
    double A;

    printf("\nWaht is your name? : ");
    // scanf("%s", &name);
    fgets(name, 25, stdin); // fgets function use for recieve the input with the whitespace so the structure of this function is fgets(variable, input_size, stdin(standard input)).
    name[strlen(name)-1] = '\0'; // Use this function from <string.h> to remain newline when we input the data by using fgets();

    printf("\nHow old are you? : ");
    scanf("%d", &age);

    printf("\nWhat the number do you need to calculate : ");
    scanf("%lf", &A);

    printf("\nHello! %s, how are you?", name);
    printf("\nYou are %d years old", age);

    // This is the useful math function
    
    printf("\n%lf",sqrt(A));
    printf("\n%lf",pow(A, 3));
    printf("\n%lf",round(A));
    printf("\n%lf",ceil(A));
    printf("\n%lf",floor(A));
    printf("\n%lf",fabs(A)); // Absolute value of the number
    printf("\n%lf",log(A));
    printf("\n%lf",sin(A));
    printf("\n%lf",cos(A));
    printf("\n%lf",tan(A));

    return 0;
}