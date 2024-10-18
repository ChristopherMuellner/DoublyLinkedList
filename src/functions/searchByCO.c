#include "./../../include/header.h"


Registration* searchByCO(Registration* head, float CO)
{
    Registration* current = head;

    while (current != NULL)
    {
        if (current->CO == CO)
        {
            printf("\n\rNachname: %s\n", current->lastname);
            printf("Model: %s\n", current->model);
            printf("CO: %.2f\n", current->CO);
            printf("Antriebsart: %s\n", current->powerTrain);
            printf("Hubraum: %d\n", current->engineCapacity);
        }

        current = current->next;
    }

    return head;
}