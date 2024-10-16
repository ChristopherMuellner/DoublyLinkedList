#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Registration
{
    char* lastname;
    char* model;
    float CO;
    char* powertrain;
    int engineCapacity;

    struct Registration* next;
    struct Registration* prev;
} Registration;


void insertSortedByLastName();
void printAscending();
void printDescending();
void readFromFile();
void writeToFile(const char* filename);
void searchByModel();
void searchByCO();
void deleteByLastName();
void deleteByPowertrain();

//utilities
const char* handleCharInput(const size_t length);
void handleNumberInput(float* input);
void printMenu(void);

#endif // MAIN_H