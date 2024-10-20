#include "./../../include/header.h"


void writeToFile(const char* filename, const Registration* registrations)
{
    FILE* file = fopen(filename, "a");

    if (file == NULL)
    {
        printf("Datei konnte nicht geöffnet werden.\n");
        return;
    }

    while (registrations != NULL)
    {
        fprintf(file, "Nachname: %s\n"
                      "Model: %s\n"
                      "CO: %.2f\n"
                      "Antriebsart: %s\n"
                      "Hubraum: %d\n\n",
                      registrations->lastname,
                      registrations->model,
                      registrations->CO,
                      registrations->powerTrain,
                      registrations->engineCapacity);

        registrations = registrations->next;

        fclose(file);
    }
}