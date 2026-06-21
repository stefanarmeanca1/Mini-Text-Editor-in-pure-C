//
// Created by Stefan Armeanca on 6/21/2026.
//

#ifndef TEXTEDITOR2_STRINGLIB_H
#define TEXTEDITOR2_STRINGLIB_H
#include <stddef.h>
size_t string_length(char* string);
char* string_copy(char* stringDest, char* stringSource);
char* string_concatenate(char* stringDest, char* stringSource);
char* string_append(char* stringDest, char* string);
#endif //TEXTEDITOR2_STRINGLIB_H
