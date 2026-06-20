#include "note.h"

void constructNote(Note* n)
{
    n->text[0] = '\0';
    n->length = 0;
    n->modified = 0;
}