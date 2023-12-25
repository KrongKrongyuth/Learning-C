#include <stdio.h>

int main(){

    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increament
    // -- decrement

    int x = 5;
    int y = 2;

    int z = x+y;
    printf("\nVariable z value : %d\n",z);
    // printf("\nVariable z value : %d",x+y); // You can do this instead.

    int w = x-y;
    printf("\nVariable w value : %d\n",w);

    int i = x*y;
    printf("\nVariable i value : %d\n",i);

    int j = x/y;
    printf("\nVariable j value : %d",j); // Wrong ansewer because j is int so it can't store the floating number.
    float k = (float)x/(float)y; // You can do this for casting the variable into the correct datatype.
    printf("\nVariable k value : %f\n",k);

    int l = x%y;
    printf("\nVariable l value : %d\n",l);

    x++; printf("\nPrint x++ : %d",x);
    y--; printf("\nPrint y-- : %d\n",y);

    // augmented assignment operators = used to replace a statemnet where an operator takes a variable as one
    //                                  of its arguments and then assigns the result back to the same variable
    //                                  x = x+1 <-> x += 1
    // We can use with all arithmetic operators like +, -, *, /, %

    return 0;
}