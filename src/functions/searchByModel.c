#include "./../../include/header.h"


Registration* searchByModel(Registration* head, const char* model)
{
    Registration* current = head;

    while (current != NULL)
    {
        if (strcmp(current->model, model) == 0)
        {
            printf("\n\rNachname: %s\n", current->lastname);
            printf("Model: %s\n", current->model);
            printf("CO: %.2f\n", current->CO);
            printf("Antriebsart: %s\n", current->powerTrain);
            printf("Hubraum: %d\n", current->engineCapacity);
        }

        current = current->next;
    }

    free(model);

    return head;
}