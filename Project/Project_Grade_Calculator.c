#include <stdio.h>
#include <math.h>

int main(){
    float Score;

    printf("\n**************************************************");
    printf("\nWelcome to the GPA calculator program");
    printf("\n**************************************************\n");
    printf("\nPlease enter your score : ");
    scanf("%f", &Score);

    if (Score >= 80 && Score <= 100){
        printf("\nYour Grade is A\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
    }
    else if (Score >= 75 && Score < 80){
        printf("\nYour Grade is B+\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
    }
    else if (Score >= 70 && Score < 75){
        printf("\nYour Grade is B\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
    }
    else if (Score >= 65 && Score < 70){
        printf("\nYour Grade is C+\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
    }
    else if (Score >= 60 && Score < 65){
        printf("\nYour Grade is C\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
    }
    else if (Score >= 55 && Score < 60){
        printf("\nYour Grade is D+\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
    }
    else if (Score >= 50 && Score < 55){
        printf("\nYour Grade is D\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
    }
    else if (Score >= 0 && Score < 50){
        printf("\nYour Grade is F\n");
        printf("\n********** Thanks! for using my program :) **********\n\n");
    }
    else{
        printf("\nPlease check your score may be something wrong\n\n");
    }

    return 0;
}

