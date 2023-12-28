#include <stdio.h>

void printAge(int *age) // Declare the function with pointer argrument
{
    printf("\n");
    printf("You are %d years old\n",*age);
    printf("\n");
}

int main()
{

    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some task are performed more easily with pointers
    //           * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL; // Declare pointer
    pAge = &age; // pointer *pAge contain the memory address of age.
    // NOTE : pointer must have the same datatype as the address.

    printf("\n");
    printf("Address of age is %p\n", &age);
    printf("The value of age is %d\n", age);
    printf("Size of age is %lu byte\n", sizeof(age));
    printf("\n");

    printf("\n");
    printf("Address of pAge is %p\n", pAge);
    printf("The value of pAge is %d\n", *pAge);
    printf("Size of age is %lu byte\n", sizeof(*pAge));
    printf("\n");

    printAge(pAge); // Pass the pointer to the function.

    return 0;
}