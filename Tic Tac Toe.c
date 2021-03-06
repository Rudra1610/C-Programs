#include <stdio.h>

char grid[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
int choice, player = 1, i;
char mark;

void drawBoard();
void logic(int, char);
int winner();

int main()
{

    do
    {

        drawBoard();
        player = (player % 2) ? 1 : 2;

        printf("\n");
        printf("Player %d,Enter a Number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';
        logic(choice, mark);

        i = winner();
        player++;

    } while (i == -1);

    drawBoard();

    if (i == 1)
    {

        printf("Player %d you've won the match", --player);
    }

    else
    {

        printf("Draw");
    }
}

void drawBoard()
{

    printf("        |       |\n");
    printf("   %c    |   %c   |   %c     \n", grid[0], grid[1], grid[2]);
    printf("________|_______|_______\n");
    printf("        |       |        \n");
    printf("   %c    |   %c   |   %c     \n", grid[3], grid[4], grid[5]);
    printf("________|_______|_______\n");
    printf("        |       |        \n");
    printf("   %c    |   %c   |   %c     \n", grid[6], grid[7], grid[8]);
    printf("        |       |        ");
}

void logic(int choice, char mark)
{

    if (choice == 0 && grid[0] == '0')
    {

        grid[0] = mark;
    }

    else if (choice == 1 && grid[1] == '1')
    {

        grid[1] = mark;
    }

    else if (choice == 2 && grid[2] == '2')
    {

        grid[2] = mark;
    }

    else if (choice == 3 && grid[3] == '3')
    {

        grid[3] = mark;
    }

    else if (choice == 4 && grid[4] == '4')
    {

        grid[4] = mark;
    }

    else if (choice == 5 && grid[5] == '5')
    {

        grid[5] = mark;
    }

    else if (choice == 6 && grid[6] == '6')
    {

        grid[6] = mark;
    }

    else if (choice == 7 && grid[7] == '7')
    {

        grid[7] = mark;
    }

    else if (choice == 8 && grid[8] == '8')
    {

        grid[8] = mark;
    }

    else
    {

        printf("Invalid Move!!");
    }
}

int winner()
{

    if (grid[0] == grid[1] && grid[1] == grid[2])
    {

        return 1;
    }

    else if (grid[3] == grid[4] && grid[4] == grid[5])
    {

        return 1;
    }

    else if (grid[6] == grid[7] && grid[7] == grid[8])
    {

        return 1;
    }

    else if (grid[0] == grid[3] && grid[3] == grid[6])
    {

        return 1;
    }

    else if (grid[1] == grid[4] && grid[4] == grid[7])
    {

        return 1;
    }

    else if (grid[2] == grid[5] && grid[5] == grid[8])
    {

        return 1;
    }

    else if (grid[0] == grid[4] && grid[4] == grid[8])
    {

        return 1;
    }

    else if (grid[2] == grid[4] && grid[4] == grid[6])
    {

        return 1;
    }

    else if (grid[0] != '0' && grid[1] != '1' && grid[2] != '2' && grid[3] != '3' && grid[4] != '4' && grid[5] != '5' && grid[6] != '6' && grid[7] != '7' && grid[8] != '8')
    {

        return 0;
    }

    else
    {

        return -1;
    }
}