#include "../include/header.h";


void printMenu(void);


int main(void)
{
    int option = 0;  // Variable for menu option
    Registration* registrations = NULL;  // Pointer to the first element of the list

    do
    {
        printMenu();
        option = handleNumberInput(); //check if input is a number

        switch (option)
        {
            case 0:  // Exit program
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
                writeToFile(handleCharInput());
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

    } while(true); // Infinite loop until user exits
}