#include <stdio.h>
#include <stdbool.h>


typedef struct Registration
{
    char* firstname;
    char* model;
    float CO;
    char* powertrain;
    int engineCapacity;

    struct Registration* next;
    struct Registration* prev;
};


void printMenu(void);


int main(void)
{

}
