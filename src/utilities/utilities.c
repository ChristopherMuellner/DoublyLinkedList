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


const char* handleCharInput(size_t MAX_LENGTH)
{
    size_t size = 10;
    size_t len = 0;

    int character;


    char* input = (char*)malloc(size * sizeof(char));

    checkIfPtrIsNull(input);

    while ((character = getchar()) != '\n' && character != EOF)
    {
        input[len++] = (char)character;

        // Wenn der aktuelle Speicher voll ist, Speichergröße verdoppeln
        if (len >= size)
        {
            size *= 2;
            input = (char *)realloc(input, size * sizeof(char));

            checkIfPtrIsNull(input);
        }
    }

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


bool checkIfPtrIsNull(const void* ptr)
{
    if (ptr == NULL)
    {
        printf("\n\rERROR: Speicher konnte nicht allokiert werden.\n");
        exit(EXIT_FAILURE);
    }

    return false;
}