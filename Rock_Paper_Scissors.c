#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// rock, paper and scissors game
int n = 3;
int player2(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    char name[20];
    int choice;
    int i;
    printf("\n    { WELCOME }\n");
    printf(" Enter your name : ");
    scanf("%s", name);
    for ( i = 1; i < 4; i++)
    {
        printf("\n");
        printf("  { ROUND %d }\n\n",i);
        printf(" [Player 1 (%s) Vs Player 2 (Computer)]\n\n", name);
        printf("--> Rock     [1]\n");
        printf("--> Paper    [2]\n");
        printf("--> Scissors [3]\n");
        printf(" Enter your choice : ");
        scanf("%d", &choice);
        int pl2=player2(n);
        switch (choice)
        {
        case 1:
            printf(" Player 1 chose : %s\n", "Rock");
            switch (pl2)
            {
            case 0:
                printf(" Player 2 chose : %s\n","rock");
                printf("--> This round is tie");
                printf("\n");
                break;
            case 1:
                printf(" Player 2 chose : %s\n","Paper");
                printf("--> Player 2 won this round");
                printf("\n");
                break;
            case 2:
                printf(" Player 2 chose : %s\n","Scissors");
                printf("--> Player 1 won this round");
                printf("\n");
                break;
            default:
                break;
            }
            break;
        case 2:
            printf(" Player 1 chose : %s\n", "Paper");
            switch (pl2)
            {
            case 0:
                printf(" Player 2 chose : %s\n","rock");
                printf("--> Player 1 won this round");
                printf("\n");
                break;
            case 1:
                printf(" Player 2 chose : %s\n","Paper");
                printf("--> This round is tie");
                printf("\n");
                break;
            case 2:
                printf(" Player 2 chose : %s\n","Scissors");
                printf("--> Player 2 won this round");
                printf("\n");
                break;
            default:
                break;
            }
            break;
        case 3:
            printf(" Player 1 chose : %s\n", "Scissors");
            switch (pl2)
            {
            case 0:
                printf(" Player 2 chose : %s\n","rock");
                printf("--> Player 2 won this round");
                printf("\n");
                break;
            case 1:
                printf(" Player 2 chose : %s\n","Paper");
                printf("--> Player 1 won this round");
                printf("\n");
                break;
            case 2:
                printf(" Player 2 chose : %s\n","Scissors");
                printf("--> This round is tie");
                printf("\n");
                break;
            default:
                break;
            }
            break;
        default:
            break;
        } 
    }
    return 0;
}
