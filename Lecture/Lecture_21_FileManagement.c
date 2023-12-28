#include <stdio.h>

int main()
{

    // WRITTING FILE
    FILE *pF = fopen("test.txt", "a"); // fopen("file_path", "function w,r,a")
    // like python w = writting, a = apeend, r = reading.

    fprintf(pF, "Using a mode r\n");
    fprintf(pF, "Make new line\n");

    fclose(pF);

    // // REMOVE FILE
    // if (remove("test.txt") == 0)
    // {
    //     printf("That file was deleted successfully!");
    // }
    // else
    // {
    //     printf("That file was NOT deleted!");
    // }

    // // READING FILE
    // FILE *pF = fopen("/Users/ton_kkrongyuth/C Programming in practice/Lecture/test.txt", "r");
    // char buffer[255];

    // if (pF == NULL)
    // {
    //     printf("\n");
    //     printf("Unable to open file\n");
    //     printf("\n");
    // }

    // while (fgets(buffer, 255, pF) != NULL)
    // {
    //     printf("%s\n", buffer);
    // }
    
    // fclose(pF);

    return 0;
}