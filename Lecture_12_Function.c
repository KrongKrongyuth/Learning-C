#include <stdio.h>

// Basic Function without any parameter.
void birthday(){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear ... YOU!");
    printf("\nHappy birthday to you!\n\n");
}
// Function with parameter.
// When you use void function which mean you need to get all of the value from it without return statement.
void birthday_to(char x[], int y){
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!\n\n", y);
}
// Function with return statement.
// Function must have the type to be the same as the return value
double square(double x){
    return x*x; // Now x*x is double that mean we need to create double type function
}

int main(){
    char name[] = "Ton";
    int age = 21;
    double x = square(3.14);

    printf("\n%lf\n",x);
    birthday();
    birthday();
    birthday();
    birthday_to(name,age);

    return 0;
}

// You can read more information on this website "https://www.javatpoint.com/functions-in-c"