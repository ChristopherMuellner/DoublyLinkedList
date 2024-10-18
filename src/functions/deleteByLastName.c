#include "./../../include/header.h"


void deleteByLastName(Registration* registrations, const char* lastname)
{
    Registration* current = registrations;

    while (current != NULL)
    {
        if (strcmp(current->lastname, lastname) == 0)
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

        current = current->next;
    }
}