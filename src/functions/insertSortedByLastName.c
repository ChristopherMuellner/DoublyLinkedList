#include "./../../include/header.h"

void insertSortedByLastName(Registration* registrations, const Registration* newRegistration)
{
    while (registrations != NULL)
    {
        newRegistration->next = registrations->next;
        newRegistration->prev = registrations;
        registrations->next = newRegistration;
        registrations = registrations->next;
    }
}