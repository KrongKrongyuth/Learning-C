#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void start_menu(); // EVALUATED
void game_rule(char[]); // EVALUATED
void start_game(int, int); // EVALUATED
void end_game(); // EVALUATED
int gen_number(); // EVALUATED

typedef char Sentence[30];
typedef struct
{
    Sentence Name;
    int Score;
} Player;


int main()
{   
    enum try_again{Yes, No} try = Yes;
    Sentence player_name;
    char decision;

    start_menu();

    printf("\n");
    printf("******************************************************************\n");
    printf("Fill in the player information before starting.\n");
    printf("******************************************************************\n");
    printf("Player name: ");
    scanf("%s", player_name);
    printf("\n");

    // Setting the main_player information
    // This case i must to use strcpy() for assign player_name from input to main_Player.Name
    Player main_Player;
    strcpy(main_Player.Name, player_name);
    main_Player.Score = 100;

    game_rule(main_Player.Name);
    start_game(main_Player.Score, gen_number());
    
    // Try again decision
    do
    {   

        if (try == Yes)
        {
            printf("\n");
            printf("******************************************************************\n");
            printf("Do you want to try again?.\n");
            printf("******************************************************************\n");
            printf("Please type only [ Y / N ]: ");
            scanf(" %c", &decision);
        }

        if (decision == 'Y')
        {   
            printf("\n\n\n");
            start_game(main_Player.Score, gen_number());
        }
        else if (decision == 'N')
        {
            try = No;
            printf("\n\n");
            end_game();
            break;
        }
        else
        {      
            printf("\n");
            printf("******* Please type the valid characters between [ Y / N ] *******\n");
        }
        
    } while (try == Yes);

    return 0;
}

void start_menu()
{   
    char enter;

    printf("\n");
    printf("**************** Welcome to Number Guessing Game! ****************\n");
    printf("\n");
    printf("------------------ (Press <Enter> to continue) -------------------\n");
    printf("\n");
    scanf("%c", &enter);
}

void game_rule(char player_name[20])
{   
    char enter;

    printf("\n");
    printf("******************************************************************\n");
    printf("RULE OF THIS GAME.\n");
    printf("******************************************************************\n");
    printf("\n");
    printf("Hello %s!, In this game, you must guess the number between 0 - 100.\n", player_name);
    printf("If the number that you guess is lower/higher than the correct number,\n");
    printf("the system will hint as follows:\n");
    printf("\n");
    printf("\t* Too Low!!! -> When you number is lower.\n");
    printf("\t* Too High!!! -> When you number is higher.\n");
    printf("\n");
    printf("You will have 100 Scores with you, so if you guess wrong, the score will\n");
    printf("decrease by -20 units. The game must be over when your guess is correct or,\n");
    printf("on the other hand, your score has reached 0.\n");
    printf("\n");
    printf("------------------ (Press <Enter> to stat game) ------------------\n");
    printf("\n");
    while ((enter = getchar()) != '\n' && enter != EOF);
    scanf("%c", &enter);
}

void start_game(int score, int answer)
{   
    enum status{Win, Losee, Playing} process = Playing;
    int candidate, rounds;
    char enter;

    do
    {

        rounds = score/20;

        // The event in game.
        if (process == Playing)
        {
            printf("Your current score is %d.\n", score);
            printf("You have %d rounds left.\n", rounds);
            printf("What's is your number?: ");
            scanf("%d", &candidate);
        }

        // Check value of candidate lower or higher than the answer?
        if (candidate > answer)
        {   
            score -= 20;
            printf("\n");
            printf("Too High!!!\n");
        }
        else if (candidate < answer)
        {   
            score -= 20;
            printf("\n");
            printf("Too Low!!!\n");
        }

        // Check is it over?
        if (candidate == answer)
        {
            process = Win;
            break;
        }
        else if (score <= 0)
        {
            process = Losee;
            break;
        }
        
        printf("\n");

    } while (process == Playing);
    
    if (process == Win)
    {   
        printf("\n");
        printf("******************************************************************\n");
        printf("\n");
        printf("YOU ARE THE CHAMPION!\n");
        printf("\n");
        printf("******************************************************************\n");
        printf("\n");
    }
    else if (process == Losee)
    {   
        printf("\n");
        printf("******************************************************************\n");
        printf("\n");
        printf("The answer is %d, you're missed all guesses, don't be sad (T-T).\n", answer);
        printf("\n");
        printf("******************************************************************\n");
        printf("\n");
    }
    
    printf("------------------ (Press <Enter> to continue) -------------------\n");
    printf("\n");
    while ((enter = getchar()) != '\n' && enter != EOF);
    scanf("%c", &enter);
}

int gen_number()
{   
    srand(time(0));

    int random_number = rand() % 101;

    return random_number;
}

void end_game()
{
    printf("\n");
    printf("---------------------- Thanks for playing! -----------------------\n");
    printf("--------------------- Hope you enjoy my game ---------------------\n");
    printf("\n");
}