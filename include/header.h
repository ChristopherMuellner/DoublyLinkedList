#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_FILENAME_LENGTH 260


typedef struct Registration
{
    char* lastname;
    char* model;
    float CO;
    char* powerTrain;
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
const char* handleCharInput(size_t length);
float handleNumberInput(void);
void printMenu(void);
bool checkIfPtrIsNull(const void* ptr);

#endif // MAIN_H