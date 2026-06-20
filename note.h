//
// Created by Stefan Armeanca on 6/20/2026.
//

#ifndef TEXTEDITOR2_NOTE_H
#define TEXTEDITOR2_NOTE_H
typedef struct
{
    char text[1024];
    int length;
    _Bool modified;
}Note;

void constructNote(Note* n);
#endif //TEXTEDITOR2_NOTE_H
