cmake_minimum_required(VERSION 3.29)
project(DoublyLinkedList C)

set(CMAKE_C_STANDARD 23)

add_executable(DoublyLinkedList
        src/main.c
        src/functions/readFromFile.c
        src/functions/printDescending.c
        src/functions/deleteByLastName.c
        src/functions/searchByModel.c
        src/functions/searchByCO.c
        src/functions/writeToFile.c
        src/functions/printAscending.c
        src/functions/insertSortedByLastName.c
        src/functions/deleteByPowertrain.c
        src/utilities/utilities.c
)
