#include <stdio.h>

int main(){

    int x; // Declaration process --> Defind the data type of x.
    x = 123; // Initialization process --> Assing value to x.

    int y = 321; // Combine.

    int age = 21; // Interger.
    float gpa = 2.05; // Floating point number.
    char grade = 'C'; // Character datatype use for store "single character".
    char name[] = "Ton"; // Array of characters.

    printf("\n%d\n",x);
    
    printf("\nHello my name is %s\n",name); // Use %s for local the place for "string" variable.
    printf("You are %d year old\n",age); // Use %d for local the place for "decimal" variable.
    printf("Your average grade is %c\n",grade); // Use %c for local the place for "character" variable.
    printf("Your gpa is %f\n",gpa); // Use %f for local the place for "floating number" variable.
}