#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

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

#endif // MAIN_H