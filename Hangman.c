#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void movie();
void actor();
void cars();
void cartoons();

void life();
void end();
void won();

void movieDiagram();
void actorDiagram();
void carsDiagram();
void cartoonsDiagram();
void hangmanDiagram();
void fourOption();
void MainDiagram();
void DeadmanDiagram();

void movieMain();
void actorMain();
void carsMain();
void cartoonMain();

// global variables
char movQ[50][30], carQ[50][30], actQ[50][30], cartoonQ[50][30], guess;
int num, score = 0, chance = 10, finish = 0, choose;

char name[30];

int main()
{

    FILE *ptr1, *ptr2, *ptr3, *ptr4; // File pointer

    // File for Questions (movie)kbkbn  j9=-   ptr1 = fopen("movieQ.txt", "r");
    ptr1 = fopen("movieQ.txt", "r");
    for (int i = 0; i < 30; i++)
    {
        fgets(movQ[i], 30, ptr1);
    }
    fclose(ptr1);

    // File for Questions (cars)
    ptr2 = fopen("carQ.txt", "r");
    for (int i = 0; i < 30; i++)
    {
        fgets(carQ[i], 30, ptr2);
    }
    fclose(ptr2);

    // File for Questions (actors)
    ptr3 = fopen("actQ.txt", "r");
    for (int i = 0; i < 30; i++)
    {
        fgets(actQ[i], 30, ptr3);
    }
    fclose(ptr3);

    // File for Questions (cartoons)
    ptr4 = fopen("cartoonQ.txt", "r");
    for (int i = 0; i < 30; i++)
    {
        fgets(cartoonQ[i], 30, ptr4);
    }
    fclose(ptr4);

    do
    {
        system("cls");
        MainDiagram();
        fourOption();
        printf("\t\t\t\t\t\t\t\t\t\t\t  ________________________\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t %c                        %c\n", 179, 179);
        printf("\t\t\t\t\t\t\t\t\t\t\t %c       %cCHOOSE%c         %c\n", 179, 31, 31, 179);
        printf("\t\t\t\t\t\t\t\t\t\t\t %c________________________%c\n\n", 179, 179);
        printf("\t\t\t\t\t\t\t\t\t\t\t          ==> ");

        scanf("%d", &choose);
        system("cls");

        if (choose == 1)
        {
            system("cls");

            MainDiagram();
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter your name : ");
            fflush(stdin);
            gets(name);

            int category;
            printf("\n\n\n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf("               ___       _____  ____   ____       \n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf(" /|  : |\\  /| |   | \\  /   |   |___   |___        \n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf(" _|_ : | \\/ | |___|  \\/  __|__ |____   ___|      ");
            printf("\n\n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf(" __     ___   ___  _____  ___    __    ____ \n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf(" __| : |___| |       |   |   |  |__|  |___    \n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf("|__  : |   | |___    |   |___|  |  \\  ___| ");
            printf("\n\n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf(" ___    ___  ___   __    ____    \n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf(" ___|: |    |___| |__|  |___       \n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf(" ___|: |___ |   | |  \\   ___|        ");
            printf("\n\n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf("         ___  ___   __  _____  ___   ___        ____  \n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf("|___| : |    |___| |__|   |   |   | |   | |\\ | |___    \n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf("    | : |___ |   | |  \\   |   |___| |___| | \\|  ___|       ");
            printf("\n\n");
            printf("\t\t\t\t\t\t\t\t\t\t\tchoose : ");
            scanf("%d", &category);

            if (category == 1) // movie
            {
                movie();
            }
            else if (category == 2)
            {
                actor();
            }
            else if (category == 3)
            {
                cars();
            }
            else if (category == 4)
            {
                cartoons();
            }
        }
        else if (choose == 2)
        { // about
            MainDiagram();
            printf("\t\t\t\tThough the origins of the game are unknown, a variant is mentioned in a book of children's games assembled by- Alice Gomme in 1894 called Birds,\n\t\t\t\t Beasts, and Fishes.[1] This version lacks the image of a hanged man, instead relying on keeping score as to the number of attempts it took each \n\t\t\t\t\t\t\t\t\t\t\tplayer to fill in the blanks.");
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t    This Game is made by :\n\t\t\t\t\t\t\t\t\t\t\t    -->Sahil Karanje\n\t\t\t\t\t\t\t\t\t\t\t    -->Tabish Khan\n\t\t\t\t\t\t\t\t\t\t\t    -->Hemant Sharma\n\t\t\t\t\t\t\t\t\t\t\t    -->Neha Paswan\n\t\t\t\t\t\t\t\t\t\t\t    -->Yesmeena Shaikh\n\t\t\t\t\t\t\t\t\t\t\t    -->Farheen Ansari");
            getch();
        }
        else if (choose == 3)
        {
            // Help
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tHOW TO PLAY\n\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\tFirst you have to enter 1 to play\n");
            printf("\t\t\t\t\t\t\t\t\t\tChoose the Category in which you are interested\n");
            printf("\t\t\t\t\t\tAnd the game will start, you have to guess the  word, if you guess the word correct then your score will be increase by 10\n");
            printf("\t\t\t\t\t\t\t\tYou will gets a 10 life, if you loose to guess each one of the word, you will losse your life\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\tYOU WILL HANG !");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t___\n\t\t\t\t\t\t\t\t\t\t\t\t|    :\n\t\t\t\t\t\t\t\t\t\t\t\t|    :\n\t\t\t\t\t\t\t\t\t\t\t\t|    X\n\t\t\t\t\t\t\t\t\t\t\t\t|   \\|/\n\t\t\t\t\t\t\t\t\t\t\t\t|    |\n\t\t\t\t\t\t\t\t\t\t\t\t|   / \\\n\t\t\t\t\t\t\t\t\t\t\t\tYou hanged !\n\n");
            getch();
        }
    } while (choose != 4);
    return 0;
}

void movie()
{
    for (int i = 0; i < 31; i++)
    {
        if (i == 0)
        {
        start:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        movQ[0][1] = 'i';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        movQ[0][2] = 'c';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'i' || guess != 'c')
                    {
                        chance--;
                        goto start;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : kick\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 1)
        {
        start2:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'h')
                    {
                        system("cls");
                        movQ[1][1] = 'h';
                        movieMain();
                        finish++;
                    }
                    else if (guess == 'p')
                    {
                        system("cls");
                        movQ[1][3] = 'p';
                        movQ[1][10] = 'p';
                        movieMain();
                        finish++;
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        movQ[1][4] = 'k';
                        movieMain();
                        finish++;
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        movQ[1][7] = 'c';
                        movieMain();
                        finish++;
                    }
                    else if (guess != 'c' || guess != 'p' || guess != 'h' || guess != 'k')
                    {
                        chance--;
                        goto start2;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : chupke chupke\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 2)
        {
        start3:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'j')
                    {
                        system("cls");
                        movQ[2][0] = 'j';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        movQ[2][2] = 'i';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        printf("\t\t\t\t");
                        movQ[2][5] = 'o';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'j' || guess != 'i' || guess != 'o')
                    {
                        chance--;
                        goto start3;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : jai ho\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 3)
        {
        start4:
            while (finish != 5)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        movQ[3][1] = 'e';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        movQ[3][3] = 'r';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        movQ[3][6] = 'i';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        movQ[3][7] = 'n';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'g')
                    {
                        system("cls");
                        movQ[3][10] = 'g';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'e' || guess != 'i' || guess != 'r' || guess != 'n' || guess != 'g')
                    {
                        chance--;
                        goto start4;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : dear zindagi\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 4)
        {
        start5:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        movQ[4][1] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'y')
                    {
                        system("cls");
                        movQ[4][3] = 'y';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'a' || guess != 'y')
                    {
                        chance--;
                        goto start5;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : baby\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 5)
        {
        start6:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        movQ[5][1] = 'o';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        movQ[5][4] = 'n';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        movQ[5][6] = 'r';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'o' || guess != 'n' || guess != 'r')
                    {
                        chance--;
                        goto start6;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : no entry\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 6)
        {
        start7:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'u')
                    {
                        system("cls");
                        movQ[6][1] = 'u';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        movQ[6][3] = 'e';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'u' || guess != 'e')
                    {
                        chance--;
                        goto start7;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : queen\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 7)
        {
        start8:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        movQ[7][1] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'w')
                    {
                        system("cls");
                        movQ[7][4] = 'w';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        movQ[7][8] = 'e';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'w' || guess != 'a' || guess != 'e')
                    {
                        chance--;
                        goto start8;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : jab we met\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 8)
        {
        start9:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        movQ[8][1] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'g')
                    {
                        system("cls");
                        movQ[8][3] = 'g';
                        movQ[8][8] = 'g';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'b')
                    {
                        system("cls");
                        movQ[8][5] = 'b';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'a' || guess != 'g' || guess != 'b')
                    {
                        chance--;
                        goto start9;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : bang bang\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 9)
        {
        start10:
            while (finish != 7)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'n')
                    {
                        system("cls");
                        movQ[9][1] = 'n';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'l')
                    {
                        system("cls");
                        movQ[9][3] = 'l';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        movQ[9][4] = 'i';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'v')
                    {
                        system("cls");
                        movQ[9][8] = 'v';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'g')
                    {
                        system("cls");
                        movQ[9][11] = 'g';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        movQ[9][15] = 'h';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 's')
                    {
                        system("cls");
                        movQ[9][14] = 's';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'n' || guess != 'l' || guess != 'i' || guess != 'v' || guess != 'g' || guess != 'h' || guess != 's')
                    {
                        chance--;
                        goto start10;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : english vinglish\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 10)
        {
        start11:
            while (finish != 5)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'n')
                    {
                        system("cls");
                        movQ[10][0] = 'n';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        movQ[10][3] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        movQ[10][5] = 't';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'y')
                    {
                        system("cls");
                        movQ[10][7] = 'y';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        movQ[10][13] = 'o';
                        movQ[10][10] = 'o';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'n' || guess != 'a' || guess != 't' || guess != 'y' || guess != 'o')
                    {
                        chance--;
                        goto start11;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : namastey london\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 11)
        {
        start12:
            while (finish != 1)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'p')
                    {
                        system("cls");
                        movQ[11][0] = 'p';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'p')
                    {
                        chance--;
                        goto start12;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : pk\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 12)
        {
        start13:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        movQ[12][1] = 'i';
                        movQ[12][9] = 'i';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        movQ[12][3] = 'd';
                        movQ[12][8] = 'd';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        movQ[12][6] = 'm';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'i' || guess != 'd' || guess != 'm')
                    {
                        chance--;
                        goto start13;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : hindi medium\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 13)
        {
        start14:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'p')
                    {
                        system("cls");
                        movQ[13][0] = 'p';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        movQ[13][2] = 'k';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'p' || guess != 'k')
                    {
                        chance--;
                        goto start14;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : piku\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 14)
        {
        start15:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'c')
                    {
                        system("cls");
                        movQ[14][0] = 'c';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'l')
                    {
                        system("cls");
                        movQ[14][3] = 'l';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        movQ[14][5] = 'a';
                        movQ[14][9] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        movQ[14][11] = 't';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'c' || guess != 'l' || guess != 'a' || guess != 't')
                    {
                        chance--;
                        goto start15;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : chillar party\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 15)
        {
        start16:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        movQ[15][1] = 'e';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        movQ[15][3] = 'c';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        movQ[15][5] = 'm';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'c' || guess != 'e' || guess != 'm')
                    {
                        chance--;
                        goto start16;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : welcome\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 16)
        {
        start17:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'n')
                    {
                        system("cls");
                        movQ[16][1] = 'n';
                        movQ[16][8] = 'n';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        movQ[16][3] = 'e';
                        movQ[16][10] = 'e';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        movQ[16][4] = 'r';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        movQ[16][7] = 'i';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'n' || guess != 'e' || guess != 'r' || guess != 'i')
                    {
                        chance--;
                        goto start17;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : entertainment\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 17)
        {
        start18:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        movQ[17][3] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        movQ[17][1] = 'e';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        movQ[17][8] = 'r';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        movQ[17][6] = 'h';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'a' || guess != 'e' || guess != 'r' || guess != 'h')
                    {
                        chance--;
                        goto start18;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : hera pheri\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 18)
        {
        start19:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'l')
                    {
                        system("cls");
                        movQ[18][1] = 'l';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        movQ[18][3] = 'c';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'w')
                    {
                        system("cls");
                        movQ[18][6] = 'w';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        movQ[18][8] = 't';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'l' || guess != 'c' || guess != 'w' || guess != 't')
                    {
                        chance--;
                        goto start19;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : black water\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 19)
        {
        start20:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        movQ[19][1] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'z')
                    {
                        system("cls");
                        movQ[19][2] = 'z';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'a' || guess != 'z')
                    {
                        chance--;
                        goto start20;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : razi\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 20)
        {
        start21:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'r')
                    {
                        system("cls");
                        movQ[20][1] = 'r';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 's')
                    {
                        system("cls");
                        movQ[20][3] = 's';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'y')
                    {
                        system("cls");
                        movQ[20][5] = 'y';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        movQ[20][6] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'r' || guess != 's' || guess != 'a' || guess != 'y')
                    {
                        chance--;
                        goto start21;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : drishyam\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 21)
        {
        start22:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'h')
                    {
                        system("cls");
                        movQ[21][1] = 'h';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        movQ[21][2] = 'o';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        movQ[21][4] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'h' || guess != 'o' || guess != 'a')
                    {
                        chance--;
                        goto start22;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : sholay\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 22)
        {
        start23:
            while (finish != 1)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        movQ[22][1] = 'a';
                        movQ[22][3] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'a')
                    {
                        chance--;
                        goto start23;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : lagaan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 23)
        {
        start24:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        movQ[23][1] = 'e';
                        movQ[23][2] = 'e';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        movQ[23][6] = 'a';
                        movQ[23][7] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'e' || guess != 'a')
                    {
                        chance--;
                        goto start24;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : veer zaara\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 24)
        {
        start25:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'h')
                    {
                        system("cls");
                        movQ[24][1] = 'h';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        movQ[24][7] = 'i';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        movQ[24][2] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        movQ[24][9] = 'd';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'h' || guess != 'i' || guess != 'a' || guess != 'd')
                    {
                        chance--;
                        goto start25;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : chakde india\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 25)
        {
        start26:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'r')
                    {
                        system("cls");
                        movQ[25][1] = 'r';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        movQ[25][2] = 'i';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'r' || guess != 'i')
                    {
                        chance--;
                        goto start26;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : uri\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 26)
        {
        start27:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'd')
                    {
                        system("cls");
                        movQ[26][2] = 'd';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        movQ[26][3] = 'h';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        movQ[26][8] = 'k';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'b')
                    {
                        system("cls");
                        movQ[26][9] = 'b';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'h' || guess != 'k' || guess != 'b' || guess != 'd')
                    {
                        chance--;
                        goto start27;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : jodhaa akbar\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 27)
        {
        start28:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        movQ[27][1] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        movQ[27][2] = 'n';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'l')
                    {
                        system("cls");
                        movQ[27][5] = 'l';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'n' || guess != 'l' || guess != 'a')
                    {
                        chance--;
                        goto start28;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : dangal\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 28)
        {
        start29:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        movQ[28][1] = 'o';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        movQ[28][2] = 'r';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        movQ[28][4] = 'e';
                        finish++;
                        movieMain();
                    }
                    else if (guess != 'o' || guess != 'r' || guess != 'e')
                    {
                        chance--;
                        goto start29;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : border\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 29)
        {
        start30:
            while (finish != 7)
            {
                system("cls"); // For clearing scre,179,179en
                movieMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        movQ[29][1] = 'a';
                        movQ[29][14] = 'a';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        movQ[29][3] = 'r';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        movQ[29][5] = 'n';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'g')
                    {
                        system("cls");
                        movQ[29][6] = 'g';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'b')
                    {
                        system("cls");
                        movQ[29][9] = 'b';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        movQ[29][10] = 'h';
                        finish++;
                        movieMain();
                    }
                    else if (guess == 'j')
                    {
                        system("cls");
                        movQ[29][13] = 'j';
                        finish++;
                        movieMain();
                    }
                    if (chance == 0)
                    {
                        break;
                    }
                    else if (guess != 'n' || guess != 'r' || guess != 'a' || guess != 'g' || guess != 'b' || guess != 'h' || guess != 'j')
                    {
                        chance--;
                        goto start30;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : bajrangi bhaijaan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
        }
        if (i == 30)
        {
            won();
            chance = 10;
            finish = 0;
            score = 0;
            getch();
        }
        if (chance == 0)
        {
            break;
        }
    }
    if (chance == 0)
    {
        system("cls");
        end();
        getch();
        chance = 10;
        finish = 0;
        score = 0;
    }
}

void actor()
{
    for (int i = 0; i < 31; i++)
    {
        if (i == 0)
        {
        start:
            while (finish != 7)
            {
                system("cls"); // For clearing scre,179,179en
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'm')
                    {
                        system("cls");
                        actQ[0][1] = 'm';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[0][2] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[0][4] = 'a';
                        actQ[0][9] = 'a';
                        actQ[0][14] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'b')
                    {
                        system("cls");
                        actQ[0][5] = 'b';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[0][11] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[0][15] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        actQ[0][12] = 'c';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'm' || guess != 'i' || guess != 'a' || guess != 'b' || guess != 'h' || guess != 'n' || guess != 'c')
                    {
                        chance--;
                        goto start;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : amitabh bachchan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 1)
        {
        start2:
            while (finish != 5)
            {
                system("cls"); // For clearing scre,179,179en
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'h')
                    {
                        system("cls");
                        actQ[1][0] = 'h';
                        actQ[1][11] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[1][2] = 'i';
                        actQ[1][5] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        actQ[1][3] = 't';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        actQ[1][9] = 'o';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[1][12] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'h' || guess != 'i' || guess != 'a' || guess != 't' || guess != 'o')
                    {
                        chance--;
                        goto start2;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : hrithik roshan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 2)
        {
        start3:
            while (finish != 6)
            {
                system("cls"); // For clearing scre,179,179en
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'h')
                    {
                        system("cls");
                        actQ[2][3] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[2][1] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'w')
                    {
                        system("cls");
                        actQ[2][4] = 'w';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        actQ[2][6] = 'r';
                        actQ[2][10] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'y')
                    {
                        system("cls");
                        actQ[2][7] = 'y';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[2][11] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'h' || guess != 'i' || guess != 'a' || guess != 'y' || guess != 'w' || guess != 'a')
                    {
                        chance--;
                        goto start3;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : aishwarya rai\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 3)
        {
        start4:
            while (finish != 7)
            {
                system("cls"); // For clearing scre,179,179en
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'e')
                    {
                        system("cls");
                        actQ[3][1] = 'e';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'p')
                    {
                        system("cls");
                        actQ[3][3] = 'p';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[3][4] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        actQ[3][10] = 'd';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[3][6] = 'a';
                        actQ[3][9] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        actQ[3][12] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[3][14] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'e' || guess != 'i' || guess != 'a' || guess != 'p' || guess != 'd' || guess != 'k' || guess != 'n')
                    {
                        chance--;
                        goto start4;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : deepika padukone\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 4)
        {
        start5:
            while (finish != 5)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'a')
                    {
                        system("cls");
                        actQ[4][1] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        actQ[4][4] = 'e';
                        actQ[4][5] = 'e';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[4][9] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[4][10] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[4][12] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'e' || guess != 'i' || guess != 'a' || guess != 'h' || guess != 'n')
                    {
                        chance--;
                        goto start5;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : ranveer singh\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 5)
        {
        start6:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 's')
                    {
                        system("cls");
                        actQ[5][0] = 's';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[5][1] = 'a';
                        actQ[5][4] = 'a';
                        actQ[5][9] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        actQ[5][3] = 'm';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[5][8] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 's' || guess != 'm' || guess != 'a' || guess != 'h')
                    {
                        chance--;
                        goto start6;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : salman khan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 6)
        {
        start7:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'l')
                    {
                        system("cls");
                        actQ[6][1] = 'l';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[6][3] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[6][6] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        actQ[6][8] = 't';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'l' || guess != 'h' || guess != 'a' || guess != 't')
                    {
                        chance--;
                        goto start7;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : alia bhatt\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 7)
        {
        start8:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'r')
                    {
                        system("cls");
                        actQ[7][1] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        actQ[7][3] = 't';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[7][7] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[7][8] = 'n';
                        actQ[7][10] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'l' || guess != 'h' || guess != 'a' || guess != 't')
                    {
                        chance--;
                        goto start8;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : kriti sanon\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 8)
        {
        start9:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'a')
                    {
                        system("cls");
                        actQ[8][1] = 'a';
                        actQ[8][8] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[8][3] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        actQ[8][4] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[8][7] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'i' || guess != 'h' || guess != 'a' || guess != 'r')
                    {
                        chance--;
                        goto start9;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : aamir khan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 9)
        {
        start10:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'r')
                    {
                        system("cls");
                        actQ[9][4] = 'r';
                        actQ[9][8] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[9][1] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        actQ[9][3] = 'e';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[9][7] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'f')
                    {
                        system("cls");
                        actQ[9][11] = 'f';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'i' || guess != 'h' || guess != 'a' || guess != 'r' || guess != 'f')
                    {
                        chance--;
                        goto start10;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : tiger shroff\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 10)
        {
        start11:
            while (finish != 6)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'r')
                    {
                        system("cls");
                        actQ[10][11] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[10][1] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[10][7] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[10][3] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'p')
                    {
                        system("cls");
                        actQ[10][8] = 'p';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        actQ[10][10] = 'o';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'i' || guess != 'h' || guess != 'a' || guess != 'r' || guess != 'p' || guess != 'o')
                    {
                        chance--;
                        goto start11;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : rishi kapoor\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 11)
        {
        start12:
            while (finish != 7)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 't')
                    {
                        system("cls");
                        actQ[11][2] = 't';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[11][1] = 'i';
                        actQ[11][4] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 's')
                    {
                        system("cls");
                        actQ[11][5] = 's';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[11][11] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        actQ[11][9] = 'e';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        actQ[11][12] = 'm';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        actQ[11][14] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'i' || guess != 'h' || guess != 't' || guess != 's' || guess != 'e' || guess != 'm' || guess != 'k')
                    {
                        chance--;
                        goto start12;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : riteish deshmukh\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 12)
        {
        start13:
            while (finish != 6)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'a')
                    {
                        system("cls");
                        actQ[12][1] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        actQ[12][4] = 'u';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[12][7] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        actQ[12][13] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[12][16] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'z')
                    {
                        system("cls");
                        actQ[12][19] = 'z';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'i' || guess != 'a' || guess != 'u' || guess != 'r' || guess != 'n' || guess != 'z')
                    {
                        chance--;
                        goto start13;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : jacqueline fernandez\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 13)
        {
        start14:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'l')
                    {
                        system("cls");
                        actQ[13][6] = 'l';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[13][2] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[13][10] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[13][12] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'i' || guess != 'l' || guess != 'h' || guess != 'n')
                    {
                        chance--;
                        goto start14;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : saif ali khan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 14)
        {
        start15:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'a')
                    {
                        system("cls");
                        actQ[14][0] = 'a';
                        actQ[14][10] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        actQ[14][2] = 'u';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        actQ[14][5] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        actQ[14][12] = 'm';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'a' || guess != 'u' || guess != 'k' || guess != 'm')
                    {
                        chance--;
                        goto start15;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : anushka sharma\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 15)
        {
        start16:
            while (finish != 3)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'h')
                    {
                        system("cls");
                        actQ[15][1] = 'h';
                        actQ[15][3] = 'h';
                        actQ[15][11] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        actQ[15][7] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[15][13] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'h' || guess != 'k' || guess != 'n')
                    {
                        chance--;
                        goto start16;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : shah rukh khan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 16)
        {
        start17:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'o')
                    {
                        system("cls");
                        actQ[16][1] = 'o';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        actQ[16][4] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[16][6] = 'h';
                        actQ[16][12] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[16][10] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'h' || guess != 'k' || guess != 'i' || guess != 'o')
                    {
                        chance--;
                        goto start17;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : sonakshi sinha\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 17)
        {
        start18:
            while (finish != 5)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'k')
                    {
                        system("cls");
                        actQ[17][0] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        actQ[17][2] = 't';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[17][4] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[17][6] = 'a';
                        actQ[17][9] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'f')
                    {
                        system("cls");
                        actQ[17][11] = 'f';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 't' || guess != 'k' || guess != 'i' || guess != 'a' || guess != 'f')
                    {
                        chance--;
                        goto start18;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : katrina kaif\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 18)
        {
        start19:
            while (finish != 6)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'h')
                    {
                        system("cls");
                        actQ[18][1] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        actQ[18][3] = 'm';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        actQ[18][7] = 'e';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[18][9] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        actQ[18][11] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        actQ[18][13] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'h' || guess != 'm' || guess != 'e' || guess != 'n' || guess != 'k' || guess != 'r')
                    {
                        chance--;
                        goto start19;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : bhumi pednekar\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 19)
        {
        start20:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 's')
                    {
                        system("cls");
                        actQ[19][0] = 's';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[19][2] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[19][4] = 'a';
                        actQ[19][8] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        actQ[19][9] = 't';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 's' || guess != 'n' || guess != 'a' || guess != 't')
                    {
                        chance--;
                        goto start20;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : sanjay dutt\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 20)
        {
        start21:
            while (finish != 5)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'u')
                    {
                        system("cls");
                        actQ[20][3] = 'u';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[20][7] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[20][1] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'w')
                    {
                        system("cls");
                        actQ[20][9] = 'w';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[20][11] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'u' || guess != 'h' || guess != 'a' || guess != 'w' || guess != 'n')
                    {
                        chance--;
                        goto start21;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : varun dhawan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 21)
        {
        start22:
            while (finish != 7)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'i')
                    {
                        system("cls");
                        actQ[21][1] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        actQ[21][2] = 'c';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'y')
                    {
                        system("cls");
                        actQ[21][4] = 'y';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[21][7] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 's')
                    {
                        system("cls");
                        actQ[21][9] = 's';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[21][10] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'l')
                    {
                        system("cls");
                        actQ[21][12] = 'l';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'i' || guess != 'c' || guess != 'a' || guess != 'y' || guess != 's' || guess != 'h' || guess != 'l')
                    {
                        chance--;
                        goto start22;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : vicky kaushal\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 22)
        {
        start23:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'o')
                    {
                        system("cls");
                        actQ[22][1] = 'o';
                        actQ[22][10] = 'o';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[22][3] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        actQ[22][6] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'p')
                    {
                        system("cls");
                        actQ[22][8] = 'p';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'o' || guess != 'k' || guess != 'a' || guess != 'p')
                    {
                        chance--;
                        goto start23;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : sonam kapoor\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 23)
        {
        start24:
            while (finish != 4)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'k')
                    {
                        system("cls");
                        actQ[23][0] = 'k';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        actQ[23][2] = 'r';
                        actQ[23][8] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[23][4] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[23][6] = 'a';
                        actQ[23][10] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'i' || guess != 'k' || guess != 'a' || guess != 'r')
                    {
                        chance--;
                        goto start24;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : kartik aaryan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 24)
        {
        start25:
            while (finish != 3)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'a')
                    {
                        system("cls");
                        actQ[24][1] = 'a';
                        actQ[24][6] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        actQ[24][2] = 'm';
                        actQ[24][10] = 'm';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        actQ[24][8] = 't';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'a' || guess != 'm' || guess != 't')
                    {
                        chance--;
                        goto start25;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : yami gautam\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 25)
        {
        start26:
            while (finish != 5)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'e')
                    {
                        system("cls");
                        actQ[25][0] = 'e';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        actQ[25][2] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[25][4] = 'a';
                        actQ[25][8] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 's')
                    {
                        system("cls");
                        actQ[25][9] = 's';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        actQ[25][11] = 'm';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'a' || guess != 'm' || guess != 'e' || guess != 'r' || guess != 's')
                    {
                        chance--;
                        goto start26;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : emraan hashmi\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 26)
        {
        start27:
            while (finish != 6)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'o')
                    {
                        system("cls");
                        actQ[26][1] = 'o';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[26][3] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'b')
                    {
                        system("cls");
                        actQ[26][6] = 'b';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[26][8] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[26][9] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        actQ[26][11] = 'm';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'o' || guess != 'n' || guess != 'b' || guess != 'a' || guess != 'h' || guess != 'm')
                    {
                        chance--;
                        goto start27;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : john abraham\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 27)
        {
        start28:
            while (finish != 5)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'a')
                    {
                        system("cls");
                        actQ[27][0] = 'a';
                        actQ[27][10] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[27][2] = 'h';
                        actQ[27][5] = 'h';
                        actQ[27][12] = 'h';
                        actQ[27][14] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        actQ[27][3] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        actQ[27][6] = 'e';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        actQ[27][16] = 'n';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'a' || guess != 'h' || guess != 'i' || guess != 'e' || guess != 'n')
                    {
                        chance--;
                        goto start28;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : abhishek bachchan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 28)
        {
        start29:
            while (finish != 6)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 'i')
                    {
                        system("cls");
                        actQ[28][1] = 'i';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[28][3] = 'h';
                        actQ[28][12] = 'h';
                        actQ[28][7] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[28][4] = 'a';
                        actQ[28][10] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        actQ[28][6] = 't';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        actQ[28][13] = 'o';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        actQ[28][15] = 'r';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'a' || guess != 'h' || guess != 'i' || guess != 't' || guess != 'o' || guess != 'r')
                    {
                        chance--;
                        goto start29;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : sidharth malhotra\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", movQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 29)
        {
        start30:
            while (finish != 5)
            {
                system("cls"); // For clearing screen
                actorMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", actQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {

                    if (guess == 's')
                    {
                        system("cls");
                        actQ[29][0] = 's';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        actQ[29][3] = 'a';
                        actQ[29][10] = 'a';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        actQ[29][4] = 'd';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        actQ[29][6] = 'h';
                        finish++;
                        actorMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        actQ[29][12] = 'o';
                        actQ[29][13] = 'o';
                        finish++;
                        actorMain();
                    }
                    else if (guess != 'a' || guess != 'h' || guess != 's' || guess != 'd' || guess != 'o')
                    {
                        chance--;
                        goto start30;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : shraddha kapoor\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
        }
        if (i == 30)
        {
            won();
            chance = 0;
            finish = 10;
            score = 0;
            getch();
        }
        if (chance == 0)
        {
            break;
        }
    }
    if (chance == 0)
    {
        system("cls");
        end();
        getch();
        chance = 10;
        finish = 0;
        score = 0;
    }
}

void cars()
{
    for (int i = 0; i < 31; i++)
    {
        if (i == 0)
        {
        start:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'l')
                    {
                        system("cls");
                        carQ[0][1] = 'l';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[0][3] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'l' || guess != 'o')
                    {
                        chance--;
                        goto start;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : alto\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 1)
        {
        start2:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'l')
                    {
                        system("cls");
                        carQ[1][2] = 'l';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        carQ[1][4] = 'n';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'l' || guess != 'n')
                    {
                        chance--;
                        goto start2;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : baleno\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 2)
        {
        start3:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        carQ[2][1] = 'e';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        carQ[2][4] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[2][6] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'e' || guess != 'r' || guess != 'o')
                    {
                        chance--;
                        goto start3;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : celrio\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 3)
        {
        start4:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        carQ[3][1] = 'i';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        carQ[3][2] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'i' || guess != 'a')
                    {
                        chance--;
                        goto start4;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : ciaz\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 4)
        {
        start5:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'z')
                    {
                        system("cls");
                        carQ[4][1] = 'z';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        carQ[4][3] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'z' || guess != 'r')
                    {
                        chance--;
                        goto start5;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : dzire\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 5)
        {
        start6:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        carQ[5][0] = 'e';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        carQ[5][2] = 'c';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'e' || guess != 'c')
                    {
                        chance--;
                        goto start6;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : eeco\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 6)
        {
        start7:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'r')
                    {
                        system("cls");
                        carQ[6][1] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        carQ[6][3] = 'i';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        carQ[6][5] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'r' || guess != 'i' || guess != 'a')
                    {
                        chance--;
                        goto start7;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : ertiga\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 7)
        {
        start8:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'g')
                    {
                        system("cls");
                        carQ[7][1] = 'g';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        carQ[7][3] = 'i';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'g' || guess != 'i')
                    {
                        chance--;
                        goto start8;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : ignis\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 8)
        {
        start9:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'r')
                    {
                        system("cls");
                        carQ[8][3] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[8][4] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 's')
                    {
                        system("cls");
                        carQ[8][6] = 's';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'r' || guess != 'o' || guess != 's')
                    {
                        chance--;
                        goto start9;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : s-cross\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 9)
        {
        start10:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'r')
                    {
                        system("cls");
                        carQ[9][3] = 'r';
                        finish++;
                        carsMain();
                    }

                    else if (guess == 's')
                    {
                        system("cls");
                        carQ[9][5] = 's';
                        carQ[9][6] = 's';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'r' || guess != 's')
                    {
                        chance--;
                        goto start10;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : s-presso\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 10)
        {
        start11:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        carQ[10][1] = 'i';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        carQ[10][3] = 'a';
                        carQ[10][12] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        carQ[10][4] = 'r';
                        carQ[10][8] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'z')
                    {
                        system("cls");
                        carQ[10][10] = 'z';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'i' || guess != 'a' || guess != 'r' || guess != 'z')
                    {
                        chance--;
                        goto start11;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : vitara brezza\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 11)
        {
        start12:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'w')
                    {
                        system("cls");
                        carQ[11][1] = 'w';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'f')
                    {
                        system("cls");
                        carQ[11][3] = 'f';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'w' || guess != 'f')
                    {
                        chance--;
                        goto start12;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : swift\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 12)
        {
        start13:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        carQ[12][1] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[12][3] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'a' || guess != 'o')
                    {
                        chance--;
                        goto start13;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : wagon-r\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 13)
        {
        start14:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'r')
                    {
                        system("cls");
                        carQ[13][1] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        carQ[13][3] = 't';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'r' || guess != 't')
                    {
                        chance--;
                        goto start14;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : creta\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 14)
        {
        start15:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        carQ[14][1] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        carQ[14][2] = 'n';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        carQ[14][4] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'a' || guess != 'n' || guess != 'r')
                    {
                        chance--;
                        goto start15;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : santro\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 15)
        {
        start16:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        carQ[15][1] = 'e';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        carQ[15][4] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'e' || guess != 'a')
                    {
                        chance--;
                        goto start16;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : verna\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 16)
        {
        start17:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();
                if (chance != 0)
                {
                    printf("\n");
                    printf("\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                    guess = getche();

                    if (guess == 'a')
                    {
                        system("cls");
                        carQ[16][1] = 'a';
                        carQ[16][3] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        carQ[16][6] = 'e';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[16][8] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'a' || guess != 'e' || guess != 'o')
                    {
                        chance--;
                        goto start17;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : tata nexon\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 17)
        {
        start18:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        carQ[17][1] = 'i';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[17][4] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'i' || guess != 'o')
                    {
                        chance--;
                        goto start18;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : tiago\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 18)
        {
        start19:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        carQ[18][1] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        carQ[18][3] = 'r';
                        carQ[18][6] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'a' || guess != 'r')
                    {
                        chance--;
                        goto start19;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : harrier\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 19)
        {
        start20:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        carQ[19][0] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        carQ[19][2] = 't';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[19][4] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'a' || guess != 't' || guess != 'o')
                    {
                        chance--;
                        goto start20;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : altroz\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 20)
        {
        start21:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        carQ[20][1] = 'o';
                        carQ[20][5] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        carQ[20][3] = 'e';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'o' || guess != 'e')
                    {
                        chance--;
                        goto start21;
                    }
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : bolero\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 21)
        {
        start22:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'h')
                    {
                        system("cls");
                        carQ[21][1] = 'h';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        carQ[21][2] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'h' || guess != 'a')
                    {
                        chance--;
                        goto start22;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : thar\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 22)
        {
        start23:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'c')
                    {
                        system("cls");
                        carQ[22][1] = 'c';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[22][2] = 'o';
                        carQ[22][6] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        carQ[22][5] = 'i';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'c' || guess != 'o' || guess != 'i')
                    {
                        chance--;
                        goto start23;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : scorpio\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 23)
        {
        start24:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'u')
                    {
                        system("cls");
                        carQ[23][1] = 'u';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        carQ[23][3] = 't';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        carQ[23][5] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'u' || guess != 't' || guess != 'r')
                    {
                        chance--;
                        goto start24;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : duster\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 24)
        {
        start25:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'w')
                    {
                        system("cls");
                        carQ[24][1] = 'w';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        carQ[24][3] = 'd';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'w' || guess != 'd')
                    {
                        chance--;
                        goto start25;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : kwid\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 25)
        {
        start26:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'n')
                    {
                        system("cls");
                        carQ[25][1] = 'n';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        carQ[25][3] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'v')
                    {
                        system("cls");
                        carQ[25][4] = 'v';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'n' || guess != 'o' || guess != 'v')
                    {
                        chance--;
                        goto start26;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : innova\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 26)
        {
        start27:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        carQ[26][1] = 'o';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        carQ[26][2] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        carQ[26][4] = 'u';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        carQ[26][6] = 'e';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'o' || guess != 'r' || guess != 'u' || guess != 'e')
                    {
                        chance--;
                        goto start27;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : fortuner\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 27)
        {
        start28:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'g')
                    {
                        system("cls");
                        carQ[27][1] = 'g';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        carQ[27][4] = 'e';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        carQ[27][6] = 't';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        carQ[27][8] = 'r';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'g' || guess != 'e' || guess != 't' || guess != 'r')
                    {
                        chance--;
                        goto start28;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : mg hector\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 28)
        {
        start29:
            while (finish != 5)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        carQ[28][1] = 'e';
                        carQ[28][2] = 'e';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        carQ[28][5] = 'c';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        carQ[28][7] = 'm';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        carQ[28][9] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 's')
                    {
                        system("cls");
                        carQ[28][11] = 's';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'e' || guess != 'c' || guess != 'm' || guess != 'a' || guess != 's')
                    {
                        chance--;
                        goto start29;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : jeep compass\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 29)
        {
        start30:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                carsMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", carQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");       // here we have put our answer
                guess = getche();
                if (chance != 0)
                {
                    if (guess == 'n')
                    {
                        system("cls");
                        carQ[29][1] = 'n';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        carQ[29][3] = 'i';
                        finish++;
                        carsMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        carQ[29][5] = 'a';
                        finish++;
                        carsMain();
                    }
                    else if (guess != 'n' || guess != 'i' || guess != 'a')
                    {
                        chance--;
                        goto start30;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : indica\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
        }

        if (i == 30)
        {
            won();
            chance = 0;
            finish = 10;
            score = 0;
            getch();
        }
        if (chance == 0)
        {
            break;
        }
    }
    if (chance == 0)
    {
        system("cls");
        end();
        getch();
        chance = 10;
        finish = 0;
        score = 0;
    }
}

void cartoons()
{
    for (int i = 0; i < 31; i++)
    {
        if (i == 0)
        {
        start:
            while (finish != 6)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        cartoonQ[0][1] = 'o';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[0][2] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[0][5] = 'n';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'j')
                    {
                        system("cls");
                        cartoonQ[0][8] = 'j';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        cartoonQ[0][10] = 'r';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'y')
                    {
                        system("cls");
                        cartoonQ[0][12] = 'y';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'n' || guess != 'o' || guess != 'm' || guess != 'j' || guess != 'r' || guess != 'y')
                    {
                        chance--;
                        goto start;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : tom and jerry\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 1)
        {
        start1:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[1][1] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[1][3] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[1][4] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        cartoonQ[1][6] = 'r';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'a' || guess != 'e' || guess != 'm' || guess != 'r')
                    {
                        chance--;
                        goto start1;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : hagemaru\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 2)
        {
        start2:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        cartoonQ[2][1] = 'o';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[2][3] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[2][5] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[2][7] = 'n';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'a' || guess != 'o' || guess != 'm' || guess != 'n')
                    {
                        chance--;
                        goto start2;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : doraemon\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 3)
        {
        start3:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[3][2] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[3][6] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        cartoonQ[3][4] = 'c';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'a' || guess != 'c' || guess != 'i')
                    {
                        chance--;
                        goto start3;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : shinchan\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 4)
        {
        start4:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[4][0] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[4][5] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[4][4] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'a' || guess != 'm' || guess != 'e')
                    {
                        chance--;
                        goto start4;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : mr bean\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 5)
        {
        start5:
            while (finish != 8)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'g')
                    {
                        system("cls");
                        cartoonQ[5][1] = 'g';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'y')
                    {
                        system("cls");
                        cartoonQ[5][3] = 'y';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[5][6] = 'n';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        cartoonQ[5][10] = 'h';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'o')
                    {
                        system("cls");
                        cartoonQ[5][14] = 'o';
                        cartoonQ[5][18] = 'o';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        cartoonQ[5][15] = 'c';
                        cartoonQ[5][20] = 'c';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        cartoonQ[5][17] = 'r';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[5][22] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'g' || guess != 'y' || guess != 'h' || guess != 'o' || guess != 'c' || guess != 'r' || guess != 'e' || guess != 'n')
                    {
                        chance--;
                        goto start5;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : oggy and the cockroaches\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 6)
        {
        start6:
            while (finish != 4) // chhota bheem
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'h')
                    {
                        system("cls");
                        cartoonQ[6][1] = 'h';
                        cartoonQ[6][8] = 'h';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        cartoonQ[6][4] = 't';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[6][9] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[6][11] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'm' || guess != 'e' || guess != 'h' || guess != 't')
                    {
                        chance--;
                        goto start6;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : chhota bheem\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 7)
        {
        start7:
            while (finish != 5) // ninja hattori
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[7][1] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'j')
                    {
                        system("cls");
                        cartoonQ[7][3] = 'j';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[7][7] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        cartoonQ[7][9] = 't';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        cartoonQ[7][11] = 'r';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'i' || guess != 'j' || guess != 'a' || guess != 't' || guess != 'r')
                    {
                        chance--;
                        goto start7;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : ninja hattori\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 8)
        {
        start8:
            while (finish != 3) // motu patlu
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        cartoonQ[8][1] = 'o';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        cartoonQ[8][3] = 'u';
                        cartoonQ[8][9] = 'u';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[8][6] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'o' || guess != 'u' || guess != 'a')
                    {
                        chance--;
                        goto start8;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : motu patlu\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 9)
        {
        start9:
            while (finish != 4) // pokemon
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        cartoonQ[9][1] = 'o';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        cartoonQ[9][2] = 'k';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[9][4] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[9][6] = 'n';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'o' || guess != 'k' || guess != 'm' || guess != 'n')
                    {
                        chance--;
                        goto start9;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : pokemon\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 10)
        {
        start10:
            while (finish != 2) // gattu battu
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[10][7] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        cartoonQ[10][2] = 't';
                        cartoonQ[10][3] = 't';
                        cartoonQ[10][8] = 't';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 't' || guess != 'a')
                    {
                        chance--;
                        goto start10;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : gattu battu\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 11)
        {
        start11:
            while (finish != 2) // perman
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[11][1] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[11][3] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'e' || guess != 'm')
                    {
                        chance--;
                        goto start11;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : perman\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 12)
        {
        start12:
            while (finish != 4) // kiteretsu
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[12][1] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[12][3] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 't')
                    {
                        system("cls");
                        cartoonQ[12][6] = 't';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        cartoonQ[12][8] = 'u';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'e' || guess != 'i' || guess != 't' || guess != 'u')
                    {
                        chance--;
                        goto start12;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : kiteretsu\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 13)
        {
        start13:
            while (finish != 3) // ultra b
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'l')
                    {
                        system("cls");
                        cartoonQ[13][1] = 'l';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'r')
                    {
                        system("cls");
                        cartoonQ[13][3] = 'r';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'b')
                    {
                        system("cls");
                        cartoonQ[13][6] = 'b';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'l' || guess != 'b' || guess != 'r')
                    {
                        chance--;
                        goto start13;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : ultra b\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 14)
        {
        start14:
            while (finish != 2) // noddy
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        cartoonQ[14][1] = 'o';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        cartoonQ[14][3] = 'd';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'o' || guess != 'd')
                    {
                        chance--;
                        goto start14;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : noddy\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 15)
        {
        start16:
            while (finish != 5)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[15][1] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        cartoonQ[15][3] = 'k';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[15][7] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        cartoonQ[15][9] = 'u';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[15][11] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'i' || guess != 'k' || guess != 'm' || guess != 'u' || guess != 'e')
                    {
                        chance--;
                        goto start16;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : mickey mouse\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 16)
        {
        start17:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[16][2] = 'n';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        cartoonQ[16][3] = 'd';
                        cartoonQ[16][6] = 'd';
                        cartoonQ[16][15] = 'd';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[16][17] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        cartoonQ[16][5] = 'u';
                        cartoonQ[16][10] = 'u';
                        cartoonQ[16][14] = 'u';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'n' || guess != 'd' || guess != 'a' || guess != 'u')
                    {
                        chance--;
                        goto start17;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : bandbudh aud budbak\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 17)
        {
        start18:
            while (finish != 7)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'r')
                    {
                        system("cls");
                        cartoonQ[17][1] = 'r';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'z')
                    {
                        system("cls");
                        cartoonQ[17][3] = 'z';
                        cartoonQ[17][4] = 'z';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[17][8] = 'n';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'h')
                    {
                        system("cls");
                        cartoonQ[17][12] = 'h';

                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[17][17] = 'm';

                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'g')
                    {
                        system("cls");
                        cartoonQ[17][21] = 'g';

                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[17][19] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'r' || guess != 'z' || guess != 'n' || guess != 'h' || guess != 'm' || guess != 'g' || guess != 'i')
                    {
                        chance--;
                        goto start18;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : grizzy and lemmings\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }

        if (i == 18)
        {
        start19:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[18][4] = 'e';
                        cartoonQ[18][13] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    if (guess == 'r')
                    {
                        system("cls");
                        cartoonQ[18][14] = 'r';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[18][5] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[18][2] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'e' || guess != 'r' || guess != 'a' || guess != 'i')
                    {
                        chance--;
                        goto start19;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : phineas and ferb\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 19)
        {
        start20:
            while (finish != 3)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 's')
                    {
                        system("cls");
                        cartoonQ[19][1] = 's';
                        finish++;
                        cartoonMain();
                    }
                    if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[19][3] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        cartoonQ[19][5] = 'd';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 's' || guess != 'a' || guess != 'd')
                    {
                        chance--;
                        goto start20;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : oswald\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 20)
        {
        start21:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'p')
                    {
                        system("cls");
                        cartoonQ[20][1] = 'p';
                        finish++;
                        cartoonMain();
                    }
                    if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[20][2] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[20][4] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[20][8] = 'a';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'p' || guess != 'i' || guess != 'e' || guess != 'a')
                    {
                        chance--;
                        goto start21;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : spider man\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 21)
        {
        start22:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'u')
                    {
                        system("cls");
                        cartoonQ[21][1] = 'u';
                        finish++;
                        cartoonMain();
                    }
                    if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[21][5] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[21][3] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[21][7] = 'n';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'u' || guess != 'm' || guess != 'e' || guess != 'n')
                    {
                        chance--;
                        goto start22;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : superman\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 22)
        {
        start23:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[22][1] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[22][2] = 'n';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'e' || guess != 'n')
                    {
                        chance--;
                        goto start23;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : ben 10\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 23)
        {
        start24:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[23][1] = 'i';
                        cartoonQ[23][4] = 'i';
                        cartoonQ[23][8] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'c')
                    {
                        system("cls");
                        cartoonQ[23][2] = 'c';
                        cartoonQ[23][9] = 'c';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'i' || guess != 'c')
                    {
                        chance--;
                        goto start24;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : richie rich\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 24)
        {
        start25:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[24][1] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'b')
                    {
                        system("cls");
                        cartoonQ[24][3] = 'b';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'l')
                    {
                        system("cls");
                        cartoonQ[24][4] = 'l';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'd')
                    {
                        system("cls");
                        cartoonQ[24][6] = 'd';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'e' || guess != 'b' || guess != 'l' || guess != 'd')
                    {
                        chance--;
                        goto start25;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : beyblade\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 25)
        {
        start26:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        cartoonQ[25][1] = 'o';
                        cartoonQ[25][6] = 'o';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'l')
                    {
                        system("cls");
                        cartoonQ[25][2] = 'l';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'o' || guess != 'l')
                    {
                        chance--;
                        goto start26;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : roll no 21\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 26)
        {
        start27:
            while (finish != 5)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'o')
                    {
                        system("cls");
                        cartoonQ[26][8] = 'o';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        cartoonQ[26][1] = 'u';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'g')
                    {
                        system("cls");
                        cartoonQ[26][3] = 'g';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'e')
                    {
                        system("cls");
                        cartoonQ[26][5] = 'e';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'k')
                    {
                        system("cls");
                        cartoonQ[26][10] = 'k';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'k' || guess != 'e' || guess != 'g' || guess != 'u' || guess != 'o')
                    {
                        chance--;
                        goto start27;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : jungle book\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 27)
        {
        start28:
            while (finish != 5)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'h')
                    {
                        system("cls");
                        cartoonQ[27][1] = 'h';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'm')
                    {
                        system("cls");
                        cartoonQ[27][3] = 'm';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[27][4] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'n')
                    {
                        system("cls");
                        cartoonQ[27][8] = 'n';
                        cartoonQ[27][15] = 'n';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[27][13] = 'i';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'i' || guess != 'n' || guess != 'a' || guess != 'm' || guess != 'h')
                    {
                        chance--;
                        goto start28;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : thomas and friends\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 28)
        {
        start29:
            while (finish != 2)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'h')
                    {
                        system("cls");
                        cartoonQ[28][1] = 'h';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'v')
                    {
                        system("cls");
                        cartoonQ[28][3] = 'v';
                        finish++;
                        cartoonMain();
                    }

                    else if (guess != 'h' || guess != 'v')
                    {
                        chance--;
                        goto start29;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : shiva\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 29)
        {
        start30:
            while (finish != 4)
            {
                system("cls"); // For clearing scre,179,179en
                cartoonMain();

                printf("\n");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\tGuess :");           // here we have put our answer
                guess = getche();

                if (chance != 0)
                {
                    if (guess == 'i')
                    {
                        system("cls");
                        cartoonQ[29][1] = 'i';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'g')
                    {
                        system("cls");
                        cartoonQ[29][2] = 'g';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'a')
                    {
                        system("cls");
                        cartoonQ[29][8] = 'a';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess == 'u')
                    {
                        system("cls");
                        cartoonQ[29][10] = 'u';
                        finish++;
                        cartoonMain();
                    }
                    else if (guess != 'i' || guess != 'g' || guess != 'a' || guess != 'u')
                    {
                        chance--;
                        goto start29;
                    }
                }
                else
                {
                    break;
                }
            }
            if (chance == 0)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer : mighty raju\n\t\t\t\t\t\t\t\t\t\t\t\t\t-->Press enter to proceed<--");
                getch();
                break;
            }
            else
            {
                score += 10;
                finish = 0;
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t%s\n", cartoonQ[i]); // IT will shows question
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress Enter To Continue->");
                getch();
            }
        }
        if (i == 30)
        {
            won();
            chance = 0;
            finish = 10;
            score = 0;
            getch();
        }
    }
    if (chance == 0)
    {
        system("cls");
        end();
        getch();
        chance = 10;
        finish = 0;
        score = 0;
    }
}

void MainDiagram()
{
    printf("\t\t\t\t\t ___________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t%c    HH       HH         HH         HHHH        HH    HHHHHHHHHHHHH    HHHH       HHHH         HH         HHHH        HH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c    HH       HH       HH  HH       HH HH       HH    HH         HH    HH HH     HH HH       HH  HH       HH HH       HH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c    HH       HH      HH    HH      HH  HH      HH    HH         HH    HH  HH   HH  HH      HH    HH      HH  HH      HH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c    HH       HH     HH      HH     HH   HH     HH    HH               HH   HH HH   HH     HH      HH     HH   HH     HH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c    HHHHHHHHHHH    HH        HH    HH     HH   HH    HH               HH    HHH    HH    HH        HH    HH    HH    HH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c    HH       HH    HHHHHHHHHHHH    HH     HH   HH    HH      HHHHH    HH           HH    HHHHHHHHHHHH    HH     HH   HH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c    HH       HH    HH        HH    HH      HH  HH    HH      HH HH    HH           HH    HH        HH    HH      HH  HH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c    HH       HH    HH        HH    HH       HH HH    HH         HH    HH           HH    HH        HH    HH       HH HH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c    HH       HH    HH        HH    HH        HHHH    HHHHHHHHHHHHH    HH           HH    HH        HH    HH        HHHH    %c\n", 179, 179);
    printf("\t\t\t\t\t%c___________________________________________________________________________________________________________________________%c\n", 179, 179);
    printf("\n\n\n\n");
}

void movieDiagram()
{
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t _______________________________________________________________________________________\n");
    printf("\t\t\t\t\t\t\t\t%c HHHH            HHHH   HHHHHHHHHHHH   HH          HH  HHHHHHHHHHHHHH  HHHHHHHHHHHHHHH %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HHHHH          HHHHH  HH          HH  HH          HH     HHHHHHHH     HHHHHHHHHHHHHHH %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH  HH        HH  HH  HH          HH  HH          HH        HH        HH              %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH   HH      HH   HH  HH          HH  HH          HH        HH        HH              %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH    HH    HH    HH  HH          HH  HH          HH        HH        HHH             %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH     HH  HH     HH  HH          HH  HH          HH        HH        HHHHHHHHHHH     %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH      HHHH      HH  HH          HH   HH        HH         HH        HHH             %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH      HHHH      HH  HH          HH    HH      HH          HH        HH              %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH                HH  HH          HH     HH    HH           HH        HH              %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH                HH  HH          HH      HH  HH         HHHHHHHH     HHHHHHHHHHHHHHH %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c HH                HH   HHHHHHHHHHHH         HH        HHHHHHHHHHHHHH  HHHHHHHHHHHHHHH %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t%c_______________________________________________________________________________________%c\n\n\n");
}

void actorDiagram()
{
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t ____________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\t\t%c                                                                                                    %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c        HHHHH          HHHHHHHHH   HHHHHHHHHHHHHHH    HHHHHHHHHHH    HHHHHHHHHH      HHHHHHHHHHHH   %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c       HH   HH         HH                 HH          HH       HH    HH       HH     HHHHHHHHHHHH   %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c      HH     HH        HH                 HH          HH       HH    HH       HH     HH             %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c     HH       HH       HH                 HH          HH       HH    HH      HH      HH             %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c    HHHHHHHHHHHHH      HH                 HH          HH       HH    HHHHHHHH        HHHHHHHHHHHH   %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c   HH           HH     HH                 HH          HH       HH    HH      HH      HHHHHHHHHHHH   %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c  HH             HH    HH                 HH          HH       HH    HH       HH               HH   %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c  HH             HH    HH                 HH          HH       HH    HH        HH              HH   %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c  HH             HH    HH                 HH          HH       HH    HH        HH    HHHHHHHHHHHH   %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c  HH             HH    HHHHHHHHH          HH          HHHHHHHHHHH    HH        HH    HHHHHHHHHHHH   %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t%c____________________________________________________________________________________________________%c\n", 179, 179);
}

void carsDiagram()
{
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t _______________________________________________________________________\n");
    printf("\t\t\t\t\t\t\t\t\t%c                                                                       %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HHHHHHHHHHHH         HHHHH          HHHHHHHHHH     HHHHHHHHHHHHHHHH  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HHHHHHHHHHHH        HH   HH         HH       HH    HHHHHHHHHHHHHHHH  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HH                 HH     HH        HH       HH    HH                %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HH                HH       HH       HH      HH     HH                %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HH               HHHHHHHHHHHHH      HHHHHHHH       HHHHHHHHHHHHHHHH  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HH              HH           HH     HH      HH     HHHHHHHHHHHHHHHH  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HH             HH             HH    HH       HH                  HH  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HH             HH             HH    HH        HH                 HH  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HHHHHHHHHHHH   HH             HH    HH        HH   HHHHHHHHHHHHHHHH  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c  HHHHHHHHHHHH   HH             HH    HH        HH   HHHHHHHHHHHHHHHH  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t%c_______________________________________________________________________%c\n", 179, 179);
}

void cartoonsDiagram()
{
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t ___________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\t|                                                                                                                   |\n");
    printf("\t\t\t\t\t\t|  HHHHHHHHH        HHHHH         HHHHHHHHHH    HHHHHHHHHHHHHHH    HHHHHHHHHHH     HHHHHHHHHH    HHHH        HH   |\n");
    printf("\t\t\t\t\t\t|  HHHHHHHHH       HH   HH        HH       HH          HH          HH       HH     HH      HH    HH HH       HH   |\n");
    printf("\t\t\t\t\t\t|  HH             HH     HH       HH       HH          HH          HH       HH     HH      HH    HH  HH      HH   |\n");
    printf("\t\t\t\t\t\t|  HH            HH       HH      HH      HH           HH          HH       HH     HH      HH    HH   HH     HH   |\n");
    printf("\t\t\t\t\t\t|  HH           HHHHHHHHHHHHH     HHHHHHHH             HH          HH       HH     HH      HH    HH    HH    HH   |\n");
    printf("\t\t\t\t\t\t|  HH          HH           HH    HH      HH           HH          HH       HH     HH      HH    HH     HH   HH   |\n");
    printf("\t\t\t\t\t\t|  HH          HH           HH    HH       HH          HH          HH       HH     HH      HH    HH      HH  HH   |\n");
    printf("\t\t\t\t\t\t|  HHHHHHHHH   HH           HH    HH        HH         HH          HH       HH     HH      HH    HH       HH HH   |\n");
    printf("\t\t\t\t\t\t|  HHHHHHHHH   HH           HH    HH        HH         HH          HHHHHHHHHHH     HHHHHHHHHH    HH        HHHH   |\n");
    printf("\t\t\t\t\t\t|___________________________________________________________________________________________________________________|\n");
}

void hangmanDiagram()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("                  ________________________     \n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("                 %c PLEASE HELP! SAVE ME!! %c   \n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf(" ____________    %c________________________%c   \n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c            %c  /                         \n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c            %c /                         \n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c          .%c%c%c.                    \n", 179, 250, 250, 250);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c         (     )                \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c          %c...%c               \n", 179, 250, 250);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c           /|\\                  \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c          / | \\                  \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c           / \\                  \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c          /   \\                  \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c          %c%c%c%c%c       \n", 179, 219, 219, 219, 219, 219);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c          %c%c%c%c%c       \n", 179, 219, 219, 219, 219, 219);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c__________%c%c%c%c%c___________________ \n", 179, 219, 219, 219, 219, 219);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c                                  %c\n", 179, 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("%c__________________________________%c\n", 179, 179);
}

void fourOption()
{
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf("        ___       ___         \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf(" /|  : |___| |   |___| |__|        \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf(" _|_ : |     |__ |   |  __|    ", 220);
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf(" __     ___   __   ___        _____  \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf(" __| : |___| |__| |   | |   |   |       \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf("|__  : |   | |__| |___| |___|   | ", 220);
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf(" __           ___        ___         \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf(" __| : |___| |__   |    |___|        \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf(" __| : |   | |___  |___ |      ", 220);
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf("        ___        _____ _____        \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf("|___|: |   | |   |   |     |         \n", 179);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf("    |: |___| |___| __|__   |       \n", 220);
    printf("\t\t\t\t\t\t\t\t\t\t\t", 179);
    printf("           \\      \n", 179);
}

void DeadmanDiagram()
{
    printf("\t\t\t\t");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t                  __________________     \n", 179, 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("                 %c YOU ARE HANGED!! %c   \n", 179, 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf(" ____________    %c__________________%c   \n", 179, 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c            %c  /                         \n", 179, 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c            %c /                         \n", 179, 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c          .%c%c%c.                    \n", 179, 250, 250, 250);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c         ( %c %c )                \n", 179, 207, 207);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c          %c...%c               \n", 179, 250, 250);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c           /|\\                  \n", 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c          / | \\                  \n", 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c           / \\                  \n", 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c          /   \\                  \n", 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c                           \n", 179, 219, 219, 219, 219, 219);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c                           \n", 179, 219, 219, 219, 219, 219);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c__________________________________ \n", 179, 219, 219, 219, 219, 219);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c                                  %c\n", 179, 179);
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("\t\t\t\t");
    printf("%c__________________________________%c\n", 179, 179);
}

void movieMain()
{
    movieDiagram();

    printf("\n");
    hangmanDiagram();
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tScore = %d         High Score = %d\n", score);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t____________\n");
    life();
}

void actorMain()
{
    actorDiagram();

    printf("\n");
    hangmanDiagram();
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tScore = %d         \n", score);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t____________\n");
    life();
}

void carsMain()
{
    carsDiagram();

    printf("\n");
    hangmanDiagram();
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tScore = %d         \n", score);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t____________\n");
    life();
}

void cartoonMain()
{
    cartoonsDiagram();

    printf("\n");
    hangmanDiagram();
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tScore = %d         \n", score);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t____________\n");
    life();
}

void life()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t");
    for (int i = 1; i <= chance + 1; i++)
    {
        printf("%c ", 3);
    }
    printf("\n");
}

void end()
{
    system("cls");
    MainDiagram();

    printf("\n");
    DeadmanDiagram();
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tScore = %d         \n", score);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t____________\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t    presss any key to continue.....");
    getch();
}

void won()
{
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t");
    printf("          ______                              ______     \n");
    printf("\t\t\t\t\t\t\t\t\t");
    printf(" \\    /  |      |  |      |       |      |   |      |  |\\    | \n");
    printf("\t\t\t\t\t\t\t\t\t");
    printf("  \\  /   |      |  |      |       |      |   |      |  | \\   | \n");
    printf("\t\t\t\t\t\t\t\t\t");
    printf("   \\/    |      |  |      |       |  /\\  |   |      |  |  \\  | \n");
    printf("\t\t\t\t\t\t\t\t\t");
    printf("   ||    |      |  |      |       | /  \\ |   |      |  |   \\ | \n");
    printf("\t\t\t\t\t\t\t\t\t");
    printf("   ||    |______|  |______|       |/    \\|   |______|  |    \\| ");
}