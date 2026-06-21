

#ifndef TEXTEDITOR2_EDITOR_H
#define TEXTEDITOR2_EDITOR_H
#include "note.h"
typedef struct
{
    Document doc;
    _Bool running;
}Editor;

void constructEditor(Editor *editor);
void destructEditor(Editor *editor);
void addText(Editor *editor);
void DocumentAppendText(Document *document, char* textBuffer);
#endif //TEXTEDITOR2_EDITOR_H
