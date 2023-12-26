#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND) check if two or more conditions are true

    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!\n\n");
    }
    else{
        printf("\nThe weather is bad!\n\n");
    }

    // logical operators = || (OR) check if at least one condition is true

    temp = 25;
    
    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!\n\n");
    }
    else{
        printf("\nThe weather is good!\n\n");
    }

    // logical operators = ! (NOT) reverse the state of a condition

    sunny = true;

    if (!sunny){
        printf("\nIt's cloudy outside!\n\n");
    }
    else{
        printf("\nIt's sunny outside!\n\n");
    }

    return 0;
}