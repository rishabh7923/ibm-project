#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int takeInput()
{
    char choice;

    scanf(" %c", &choice);
    choice = tolower(choice);

    if (choice != 'r' && choice != 'p' && choice != 's') {
        printf("ERROR: Invalid choice! Try again");
        exit(1);
    }

    return choice;
}

int main()
{
    char player1, player2;

    printf("\nChoose below given options to give answer");
    printf("\nR - Rock\nP - Paper\nS - Scissors\n\n");

    printf("Player (1) choice: ");
    player1 = takeInput();

    printf("Player (2) choice: ");
    player2 = takeInput();

    printf("-----------------------\n");

    if (player1 == player2)
        printf("Match Draw, Both Chose Same");
    else if ((player1 == 'r' && player2 == 's') ||
             (player1 == 'p' && player2 == 'r') ||
             (player1 == 's' && player2 == 'p'))
        printf("Player (1) Won The Match");
    else
        printf("Player (2) Won The Match");

    printf("\n\n");

    return 0;
}
