#include <stdio.h>
#include <string.h> // This libray use for string function

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

int findMax(int x, int y){
    // ternary operator = shortcut to if/else when assigning/returning a value
    // formular is : (condition) ? value if true : value if false
    return (x > y) ? x : y;
}

// function prototype

// Function declaration, w/o body, before main().
// Ensure that calls to a function aremade with the correct arguments
void hello(char[], int); // Function prototype

// IMPORTANT NOTES
// Many C compilers do not check for parameter matching
// Missing arguments will result in unexpercted behavior
// A funciotn prototype cause the compiler to flag an erro if arguments are missing

// ADVANTAGES
// 1. Easier to navigate a program w/ main() at the top
// 2. Helps with debugging
// 3. Commonly used in header files
int main(){

    char name[] = "Ton";
    int age = 21;
    double x = square(3.14);
    int max = findMax(3,4);

    printf("\n%lf\n",x);
    printf("\n%d\n",max);
    birthday();
    birthday();
    birthday();
    birthday_to(name,age);

    hello(name, age);

    char string1[15] = "Krong";
    char string2[15] = "KRONG";

    // strlen(string1);                                 // String lower case ** BUT NOW IS NOT WORKING, I NEED TO WRITE MY OWN FUNCTION **
    // strupr(string1);                                 // String upper case ** BUT NOW IS NOT WORKING, I NEED TO WRITE MY OWN FUNCTION **
    // strcat(string1, string2);                        // Append string1 with string2 ** IN THIS CASE YOU MUST ALLOCATED ENOUGH MEMORY FOR STRING **
    // strncat(string1, string2, 1);                    // You can append the string1 with the specific number of string 2
    // strcpy(string1, string2);                        // Copy string2 and pase to string1
    // strncpy(string1, string2, 6);                    // Copy n characters of string2 to string1

    // strset(string1, '?');                            // sets all characters of a string to a given character ** Can't work anymore T-T **
    // strnset(string1, '?', 1);                        // sets first n characters of a string to a given character ** Can't work anymore T-T **
    // strrev(string1);                                 // reverse a string ** Can't work anymore T-T **

    // int result = strlen(string1);                    // resturn length of the string.
    // int result = strcmp(string1, string2);           // return 0 if string are the same, return other value if string are not the same.
    // int result = strncmp(string1, string2, 1);       // Compare n characters of string.
    // int result = strcasecmp(string1, string2);       // Compare all the string (ignore case).
    int result = strncasecmp(string1, string2, 4);   // Compare n characters of string (ignore case).

    printf("\n\n%s", string1);
    printf("\n%d\n\n", result);

    return 0;
}

void hello(char name[], int age){
    printf("\nHello my name is %s",name);
    printf("\nI'm %d years old",age);
} // Now we can declare the function after int main() :)

// You can read more information on this website "https://www.javatpoint.com/functions-in-c"