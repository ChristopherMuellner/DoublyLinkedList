#include <stdio.h>

#include "../include/main.h";


void printMenu(void);


int main(void)
{
    int option = 0;  // Variable for menu option

    do
    {
        printMenu();

        printf(">> Option: ");

        //check if input is a number
        if (scanf("%d", &option) != 1)
        {
            printf("\r\nUngueltige Eingabe. Bitte geben Sie eine Zahl ein.\n");
            while (getchar() != '\n'); //clear puffer (reject chars until \n)
        }

        else
        {
            switch (option)
            {
                case 0:  // Exit program
                    //free();
                return EXIT_SUCCESS;

                case 1:  // Add students
                    insertSortedByLastName();
                break;

                case 2:  // Print student array
                    printAscending();
                break;

                case 3:  // Read students from a file
                    printDescending();
                break;

                case 4:  // Write students to a file
                    readFromFile();
                break;

                case 5:
                    writeToFile();
                break;

                case 6:
                    searchByModel();
                break;

                case 7:
                    searchByCO();
                break;

                case 8:
                    deleteByLastName();
                break;

                case 9:
                    deleteByPowertrain();
                break;

                default:  // Invalid option
                    printf("\n\rUnerwartete Option.\n");
                break;
            }
        }   // Infinite loop until user exits
    } while(true);
}
