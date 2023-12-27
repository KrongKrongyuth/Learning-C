#include <stdio.h>

int main(){
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // $lf = double
    // %d = integer

    // %.1 = decimal presision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    
    printf("\nItem 1 : %f", item1);
    printf("\nItem 2 : %f", item2);
    printf("\nItem 3 : %f\n", item3);

    printf("\nItem 1 : %.2f", item1);
    printf("\nItem 2 : %.2f", item2);
    printf("\nItem 3 : %.2f\n", item3);

    printf("\nItem 1 : %8.2f", item1);
    printf("\nItem 2 : %8.2f", item2);
    printf("\nItem 3 : %8.2f\n", item3);

    printf("\nItem 1 : %-8.2f", item1);
    printf("\nItem 2 : %-8.2f", item2);
    printf("\nItem 3 : %-8.2f\n", item3);   // %- = left align --> put the number close to boarder.
}