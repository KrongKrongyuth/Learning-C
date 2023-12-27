#include <stdio.h>

// enum = a user defined type of named integers identifires
//        help to make a program more readable.

// Primitive enum Declaration
// enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

// Modern enum Declaration
// You can use this either but the index of each member will start counting from 0.
// It same as "enum Day{Sun = 0, Mon = 1, Tue = 2, Wed = 3, The = 4, Fri = 5, Sat = 6}"
enum Day{Sun, Mon, Tue, Wed, Thu, Fri, Sat}; 

int main()
{
    enum Day today = Mon; // Use enum to assing the value to variable

    if (today == Sun || today == Sat) // By using enum my program is more readable :)
    {   
        printf("\n");
        printf("Party Time!\n");
        printf("Value of enum : %d\n", today);
        printf("\n");
    }
    else
    {   
        printf("\n");
        printf("I don't need to work :(\n");
        printf("Value of enum : %d\n", today);
        printf("\n");
    }
    
    return 0;
}