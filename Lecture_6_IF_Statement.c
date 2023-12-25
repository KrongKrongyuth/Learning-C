#include <stdio.h>

int main(){
    
    int age;

    printf("\nEnter your age : ");
    scanf("%d", &age);

    // Comparison operators : >, <, >=, <= and == all like python
    if(age >= 18){
        printf("\nYou are adult :)\n\n");
    }
    else if (age == 0){
        printf("\nYou were just born!\n\n");
    }
    else if (age <= 0){
        printf("\nYou haven't been born yet!\n\n");
    }
    else{
        printf("\nYou are too young T-T\n\n");
    }

    return 0;
}