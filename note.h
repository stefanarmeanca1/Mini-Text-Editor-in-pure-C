//
// Created by Stefan Armeanca on 6/20/2026.
//

#ifndef TEXTEDITOR2_NOTE_H
#define TEXTEDITOR2_NOTE_H
#include <stddef.h>
typedef struct
{
    char *text;
    size_t length;
    size_t capacity;
    _Bool modified;
}Document;

void constructNote(Document *n);
void destructNote(Document *n);
#endif //TEXTEDITOR2_NOTE_H
