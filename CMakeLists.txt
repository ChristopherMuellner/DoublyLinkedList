cmake_minimum_required(VERSION 3.29)
project(DoublyLinkedList C)

set(CMAKE_C_STANDARD 23)

add_executable(DoublyLinkedList
        src/main.c
        src/readFromFile.c
        src/printDescending.c
        src/deleteByLastName.c
        src/searchByModel.c
        src/searchByCO.c
        src/writeToFile.c
        src/printAscending.c
        src/insertSortedByLastName.c
        src/deleteByPowertrain.c

        include/header.h
        src/utilities.c
)
