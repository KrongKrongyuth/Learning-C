#include <stdio.h>
#include <string.h>

typedef char user[25]; // Create the nickname of char user[25]

struct Player // Create the struct and create 2 attribute(I don't know what C user call it LOL)
{
    char name[12];
    int socre;
};

typedef struct // Implement typedef with struct 
{
    char name[25];
    char password[12];
    int id;
} User; // Nickname of this struct in "User"

typedef struct
{
    char name[20];
    float gpa;
} Student;




int main()
{
    // struct = collection of related members ("variables")
    //          they can be of differet data tyoes
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)

    // We can using struct like a class in python (like using attribuite in class) by "struct STRUC_NAME var_name;"
    // Then we must assign the value int the struct like an atrribute in python such as Player.name = "Ton";

    // struct Player Player1, Player2;
    
    // strcpy(Player1.name, "Ton");
    // Player1.socre = 4;

    // strcpy(Player2.name, "Tim");
    // Player2.socre = 5;

    // Or we can assing the value to struct by do this instead.
    struct Player Player1 = {"Ton", 4};
    struct Player Player2 = {"Tim", 5};

    printf("\nPlayer 1 information\n");
    printf("Nmae : %s\n", Player1.name);
    printf("Score : %d\n", Player1.socre);

    printf("\nPlayer 2 information\n");
    printf("Name : %s\n", Player2.name);
    printf("Score : %d\n", Player2.socre);

    // typedef = reserved keyword that gives an existing datatype a "nickname"

    user user1 = "Ton"; // user is a typedef of "char user[25]"

    User user_1 = {"Ton", "password", 123456789};

    printf("\n%s\n",user_1.name);
    printf("%s\n",user_1.password);
    printf("%d\n",user_1.id);

    // Array of Structs

    Student Student1 = {"Ton", 4.00};
    Student Student2 = {"Tim", 3.0};
    Student Student3 = {"Tam", 2.00};
    Student Student4 = {"Tam", 3.75};

    Student Students[] = {Student1, Student2, Student3}; // Declare array of struct by type variable_name[].

    int len_Students = sizeof(Students)/sizeof(Student1);

    printf("\nLearning summary anoucement\n");
    for (int i = 0; i < len_Students; i++)
    {   
        printf("Student : %-10s%.2lf\n",Students[i].name, Students[i].gpa);
    }
    
    return 0;
}