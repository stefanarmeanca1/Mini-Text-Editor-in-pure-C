//
// Created by Stefan Armeanca on 6/20/2026.
//

#ifndef TEXTEDITOR2_NOTE_H
#define TEXTEDITOR2_NOTE_H
#include <stddef.h>
typedef struct
{
    char *text;
    int length;
    size_t capacity;
    _Bool modified;
}Note;

void constructNote(Note* n);
void readNote(Note* n);
void displayNote(Note* n);
_Bool isEmpty(Note* n);
#endif //TEXTEDITOR2_NOTE_H
