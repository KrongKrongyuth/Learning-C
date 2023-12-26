#include <stdio.h>
#include <string.h>

int main(){
    
    // for loop = repeats a section of code a limited amount of times
    // Structure of for loop : for (int i = 1; terminal; changes of i)
    
    printf("\nFirst for loop");
    for (int i = 1; i <= 10; i++){
        printf("\n%d\n",i);
    }
    
    printf("\nSecond for loop");
    for (int i = 1; i <= 10; i += 2){
        printf("\n%d\n",i);
    }

    printf("\nThrid for loop");
    for (int i = 10; i > 0; i--){
        printf("\n%d\n",i);
    }

    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhat's your name? : ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) // If condition is ture it will repeat until condition false
    {
        printf("\nYou did not enter your name?");
        printf("\nWhat's your name? : ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("\nHello %s\n", name);

    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition.

    int number = 0;
    int sum = 0;

    do{
        printf("\nEnter a # above 0 : ");
        scanf("%d", &number);
        if (number > 0){
            sum += number;
        }
    }while(number > 0); // Do the task before check condtion of while loop and it will repeat until while condition is false.
    printf("\nSummation of your number is %d\n", sum);

    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbols;

    printf("\nEnter # of rows : ");
    scanf("%d", &rows);

    printf("\nEnter # of columns : ");
    scanf("%d", &columns);

    printf("Enter a symbol to use : ");
    scanf(" %c", &symbols); // In this case you need to create the whitespace in front of %c --> for \n

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbols);
        }
        printf("\n");
    }

    // continue = skip rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for (int i = 1; i < 20; i++){
        if (i == 13){
            break;
        }
        else{
            printf("\n%d\n",i);
        }
    }
    
    return 0;
}