//
// Created by Stefan Armeanca on 6/21/2026.
//

#include "Editor.h"
#include "note.h"
#include <stdlib.h>
#include <stdio.h>
#include "stringlib.h"

void constructEditor(Editor *editor)
{
    constructNote(&editor->doc);
    editor->running = 1;
}

void destructEditor(Editor *editor)
{
    destructNote(&editor->doc);
    editor->running = 0;
}

void addText(Editor *editor)
{
    char textBuffer[256];
    getchar();
    fgets(textBuffer,sizeof(textBuffer),stdin);
    DocumentAppendText(&editor->doc,textBuffer);
}

void DocumentAppendText(Document *document, char* textBuffer)
{
    size_t textLength = string_length(textBuffer);
    size_t requiredCapacity = document->length + textLength + 1;

    // If text's capacity is still lower than the required capacity
    // Multiply it by 2 until it's enough
    if (requiredCapacity > document->capacity)
    {
        while (requiredCapacity > document->capacity)
            document->capacity *= 2;

        // Reallocate text's size by the capacity resulted above
        document->text = realloc(document->text,document->capacity * sizeof(char));
    }

    // If there's enough capacity, concatenate it regardless
    string_concatenate(document->text,textBuffer);
    document->length += textLength;
    document->modified = 1;
    }
