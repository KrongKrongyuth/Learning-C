#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';                                   // Single charactre --> %c (character)
    char b[] = "Ton";                               // array of character(1 or more character) --> %s (string)

    float c = 3.141592653589793;                    // 4 bytes (32 bit of precision) 6-7 digits --> %f (float)
    double d = 3.141592653589793;                   // 8 bytes (64 bit of precision) 15-16 digits --> %lf (long float)

    bool e = true;                                  // 1 byte (1 = ture or 0 = false) --> %d (decimal)

    char f = 120;                                   // 1 byte (-128 to +127) --> %d or $c
    unsigned char g = 255;                          // 1 byte (0 to +255) --> %d or %c
    // "unsigned" use for config the range of the vairable into online positive range such as turn char(-128,127) --> unsigned char(0,255)
    // That means if we know we don't need to use the negative value we can use "unsigned" to make more positive range.
    // If we store more than the range of unsigned it will return the value to 0.
    // All normal datatype is sign already

    short h = 32767;                                // 2 bytes (-32,768 to +32,767) --> %d
    unsigned short i = 65535;                       // 2 bytes (0 to +65,535) --> %d

    int j = 123871590;                              // 4 bytes (-2,147,483,648 to +2,147,483,547) --> %d
    unsigned int k = 4294967295;                   // 4 bytes (0 to +4,294,967,295) --> %u

    long long l = 9223372036854775807;              // 8 bytes (-9 quintillion to +9 quintillion) --> %lld
    unsigned long long m = 18446744073709551615U;   // 8 bytes (0 to +18 quintillon) --> %llu
    // U is use to deal with very large number (avoid error)

    printf("\nLess digit float : %f",c);
    printf("\nLess digit double : %lf",d);
    printf("\nMore digit float : %.15f",c); // The result not differ because float cannot store the digit more than 6-7 digit, mean it not accurate!.
    printf("\nMore digit double : %.15lf\n",d); // More accurate than float.

    printf("\nBoolean true : %d\n",e); // Boolean result if true return 1, false return 0.

    printf("\nNumeric character using %%d : %d",f); // character as numeric
    printf("\nNumeric character using %%c (Turn into sting by ASCII table) : %c\n",f); // numeric character when you turn it into character by using ASCII table

    printf("\nmaximum value of numerical character : %d",f);
    printf("\nmaximum value of unsigned numerical character : %d\n",g);

    printf("\nmaximum value of short int : %d",h);
    printf("\nmaximum value of unsigned short int : %d\n",i);

    printf("\nmaximum value of int : %d",j);
    printf("\nmaximum value of unsigned int : %u\n",k);

    printf("\nmaximum value of long long int : %lld",l);
    printf("\nmaximum value of unsigned long long int : %llu\n",m);

    // Now we already have long double and more.
    // If you need to use check out in "https://byjus.com/gate/data-types-in-c/"

    return 0;
}