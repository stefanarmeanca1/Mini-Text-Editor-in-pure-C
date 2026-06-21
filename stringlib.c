//
// Created by Stefan Armeanca on 6/21/2026.
//

#include "stringlib.h"

size_t string_length(char *string)
{
    size_t length = 0;
    while (*string++)
        length++;
    return length;
}

char* string_copy(char *stringDest, char *stringSource)
{
    char *start = stringDest;
    while (*stringSource)
    {
        *stringDest = *stringSource;
        stringDest++;
        stringSource++;
    }
    *stringDest = '\0';
    return start;
}

char* string_concatenate(char* stringDest, char* stringSource)
{
    char* start = stringDest;
    while (*stringDest)
        stringDest++;

    while (*stringSource)
    {
        *stringDest = *stringSource;
        stringDest++;
        stringSource++;
    }
    *stringDest = '\0';
    return start;
}
