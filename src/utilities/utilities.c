#include <string.h>

#include "../../include/header.h"


void printMenu()
{
    printf
    (
        "1.Einfuegen nach Nachnamen sortiert\n"
        "2.Ausgabe am Bildschirm aufsteigend sortiert\n"
        "3.Ausgabe am Bildschirm absteigend sortiert\n"
        "4.Einlesen einer Datei\n"
        "5.Ausgabe in eine Datei\n"
        "6.Suchen nach Type\n"
        "7.Suchen nach CO\n"
        "8.Loeschen nach Nachnamen\n"
        "9.Loeschen nach Antriebsart\n"
    );
}


const char* handleCharInput(size_t length)
{
    char* input = (char*)malloc(length * sizeof(char));

    if (input == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    do
    {
        printf("\n\rFilename (max %llu): ", length);
        scanf("%s", input);

        if (strlen(input) > length)
        {
            printf("\n\rEingabe ist laenger als %llu Zeichen.", length);
            while (getchar() != '\n'); // Clear input buffer
        }

    } while (strlen(input) > length);

    return input;
}


float handleNumberInput()
{
    float input = 0;

    do
    {
        if (scanf("%d", &input) != 1)
        {
            printf("\r\nUngueltige Eingabe. Bitte geben Sie eine Zahl ein.\n");
            while (getchar() != '\n'); //clear puffer
        }

        else
        {
            return input;
        }

    } while (true); // Infinite loop until user enters a number
}