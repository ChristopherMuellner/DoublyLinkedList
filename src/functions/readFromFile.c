#include "./../../include/header.h"


Registration* readFromFile(const char* filename)
{
    FILE* file = fopen(filename, "r");

    Registration* registrations = NULL;

    if (file == NULL)
    {
        printf("Datei konnte nicht geöffnet werden.\n");
        exit(EXIT_FAILURE);
    }

    if (scanf("%s", file) == EOF)
    {
        printf("Datei ist leer.\n");
        exit(EXIT_FAILURE);
    }

    do
    {
        Registration* registration = (Registration*)malloc(sizeof(Registration));

        fscanf(file, "Nachname: %s\n"
                     "Model: %s\n"
                     "CO: %.2f\n"
                     "Antriebsart: %s\n"
                     "Hubraum: %d\n\n",
                     registration->lastname,
                     registration->model,
                    &registration->CO,
                     registration->powerTrain,
                    &registration->engineCapacity);

        registration->next = registrations;
        registrations = registration;
    } while (!feof(file));
}