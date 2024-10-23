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


void insertSortedByLastName(Registration* registrations, const Registration* newRegistration);
void printAscending(const Registration* registrations);
void printDescending(const Registration* registrations);
Registration* readFromFile(const char* filename);
void writeToFile(const Registration* registration, const char* filename);
Registration* searchByModel(Registration* head, const char* model);
Registration* searchByCO(Registration* head, float CO);
Registration* deleteByLastName(Registration* registrations, const char* lastname);
void deleteByPowertrain(Registration* registrations, const char* powerTrain);

/*------------------UTILITIES---------------*/
const char* handleCharInput(void);
float handleNumberInput(void);
void printMenu(void);
bool checkIfPtrIsNull(const void* ptr);
bool containsAllChars(const char* str, const char* chars);
Registration* handleRegistrationInput();

#endif // MAIN_H