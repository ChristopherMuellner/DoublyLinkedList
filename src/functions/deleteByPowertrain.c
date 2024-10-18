#include "./../../include/header.h"


void deleteByPowertrain(Registration* registrations, const char* powerTrain)
{
    Registration* current = registrations;

    while (current != NULL)
    {
        if (strcmp(current->powerTrain, powerTrain) == 0)
        {
            if (current->prev != NULL)
            {
                current->prev->next = current->next;
            }

            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }

            free(current);
        }
    }
}