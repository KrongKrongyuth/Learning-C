#include <stdio.h>
#include <string.h>

void bubble_sort_numer(int array[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
}

void printArray_numer(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
}

void bubble_sort_char(char array[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
}

void printArray_char(char array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
    
}

int main(){

    // array = a data structure that can store many values of the "same datatype".

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0}; // Arrays of numbers
    char name[] = "Ton"; // Arrays of characters
    double num[2]; // Create arrays before assign the value to arrays
    
    num[0] = 5.0;
    num[1] = 10.0;

    printf("\n$%.2lf", prices[1]);
    printf("\n$%.2lf\n\n", num[0]);

    // loop in arrays

    printf("size of prices is %lu bytes\nsize of single element is %lu bytes\n\n", sizeof(prices), sizeof(prices[0])); 
    // We can use sizeof() function for checking the size of arrays in bytes.
    // Then we can calculate the number of membership in arrays by using sizeof(Arrays)/sizeof(Arrays[0])

    int size_of_prices = sizeof(prices)/sizeof(prices[0]);

    printf("membership in prices is %d unit\n", size_of_prices); 
    for (int i = 0; i < size_of_prices; i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    // 2D array = an array, where each element is an entier array
    //            useful if you need a matrix, grid, or table of data

    // int numbers[2][3] = {{1,2,3},
    //                      {4,5,6}}; // declare the 2D array in this case "you must specifire the number of row and number of columns."
    
    int numbers[3][3];

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", numbers[i][j]);
        }
        printf("\n");
    }
    
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // cars[0] = "Tesla"; // Dosen't work in C programming we need to use strcpy() from string.h
    strcpy(cars[0], "Tesla");

    printf("\n");
    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    // Swap value of 2 variables

    char x = 'X';
    char y = 'Y';
    char temp;
    
    temp = x;
    y = x;
    y = x;

    printf("\n");
    printf("X = %c\nY = %c\n",x,y);

    int array[] = {0,1,8,6,1,2,6,3};
    int size = sizeof(array)/sizeof(array[0]);

    bubble_sort_numer(array, size);
    printf("\n");
    printArray_numer(array, size);
    printf("\n");
    
    // REMIDER - You can't declare variable as the same name
    char array_char[] = {'E', 'A', 'D', 'B', 'C'};
    int size_char = sizeof(array_char)/sizeof(array_char[0]);

    bubble_sort_char(array_char, size_char);
    printf("\n");
    printArray_char(array_char, size_char);
    printf("\n");

    return 0;
}