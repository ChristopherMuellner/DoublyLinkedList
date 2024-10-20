#include <stdio.h>
#include <stdlib.h>

const char* readSentencesFromFile(const char* filename)
{
    FILE* file = fopen(filename, "r");

    char* line = NULL;

    if (file == NULL)
    {
        printf("Datei konnte nicht geöffnet werden.\n");
        return;
    }

    while (printf("%s", line) || !EOF)
    {
        
    }

    free(line);

    fclose(file);
}