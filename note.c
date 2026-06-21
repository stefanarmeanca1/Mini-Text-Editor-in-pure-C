#include "note.h"
#include <stdio.h>
#include <stdlib.h>

void constructNote(Document *d)
{
    d->capacity = 32;
    d->length = 0;
    d->modified = 0;
    d->text = malloc(d->capacity * sizeof(char));

    if (d->text == NULL)
    {
        d->capacity = 0;
        return;
    }

    d->text[0] = '\0';
}

void destructNote(Document *d)
{
    free(d->text);
    d->text = NULL;
    d->capacity = 0;
    d->length = 0;
    d->modified = 0;
}
