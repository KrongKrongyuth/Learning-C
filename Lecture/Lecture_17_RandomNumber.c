#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0)); // Set the seed related with the current time.
    printf("%ld\n",time(0)); // Value of current time.

    int random = rand(); // It will return the random number between [0, very large number]
    random = rand() % 6; // It will reutnr the random number between [0,5]
    random = (rand() % 6) + 1; // It will reutnr the random number between [1,6]

    printf("Random number is : %d\n", random); // Value of random number

    return 0;
}