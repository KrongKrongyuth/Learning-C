#include <stdio.h>

int main(){
    
    // switch : A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases
    
    char grade;

    printf("\nEnter you grade(letter) : ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A' :
        printf("\nYour grade is Perfect!\n\n");
        break;
    case 'B' :
        printf("\nYour grade is Good!\n\n");
        break;
    case 'C' :
        printf("\nYour grade is OK!\n\n");
        break;
    case 'D' :
        printf("\nAt least it's not an F!\n\n");
        break;
    case 'F' :
        printf("\nYOU FAILED!\n\n");
        break;
    default:
        printf("\nPlease enter only the valid grades.\n\n");
        break;
    }

    return 0;
}