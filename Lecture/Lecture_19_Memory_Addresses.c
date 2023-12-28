#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X'; // In memory address of a is 'X'
    char b = 'Y';
    char c = 'Z';

    printf("\n");
    printf("Size of a is %lu bytes\n", sizeof(a));
    printf("Memmory Address of a is %p\n", &a); // Last letter is b
    printf("\n");

    printf("Size of b is %lu bytes\n", sizeof(b));
    printf("Memmory Address of b is %p\n", &b); // Last letter is a
    printf("\n");

    printf("Size of c is %lu bytes\n", sizeof(c));
    printf("Memmory Address of c is %p\n", &c); // Last letter is 9
    printf("\n");

    // Notice that if a,b, and c are char their size is 1 byte, so the last character of memory
    // is only 1 bit apart between each of them.

    // If you declare a,b, and c by different data types it will gain memory address differences.

    return 0;
}