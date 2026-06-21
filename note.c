#include "note.h"
#include <stdio.h>
#include <stdlib.h>

void constructNote(Note *n)
{
    n->capacity = 32;
    n->length = 0;
    n->modified = 0;
    n->text = malloc(n->capacity * sizeof(char));

    if (n->text == NULL)
    {
        n->capacity = 0;
        return;
    }

    n->text[0] = '\0';
}

void destructNote(Note *n)
{
    free(n->text);
    n->text = NULL;
    n->capacity = 0;
    n->length = 0;
    n->modified = 0;
}
