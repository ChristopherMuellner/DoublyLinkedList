#include "./../../include/header.h"


void printDescending(const Registration* registrations)
{
    if (registrations == NULL)
    {
        printf("Liste ist leer bitte zuerst einlesen/laden.\n");
        return;
    }

    while (registrations->next != NULL)
    {
        printf("\n\rNachname: %s\n", registrations->lastname);
        printf("Model: %s\n", registrations->model);
        printf("CO: %.2f\n", registrations->CO);
        printf("Antriebsart: %s\n", registrations->powerTrain);
        printf("Hubraum: %d\n", registrations->engineCapacity);

        registrations = registrations->next;
    }
}