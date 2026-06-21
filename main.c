#include <stdio.h>
#include "note.h"
#include "Editor.h"
#include "stringlib.h"

/*
Vreau o aplicație în consolă unde pot:

1.Deschide un fișier text
-dacă există, îl încarcă în memorie;
-dacă nu există, pornește cu document gol.

2.Edita textul
-inserare caracter;
-ștergere caracter;
-inserare linie nouă;
-mutare cursor stânga/dreapta/sus/jos.

3.Salva fișierul
-scriere pe disc;
-detectare dacă documentul a fost modificat.

4.Căutare în text
-caut un cuvânt;
-îmi arată prima apariție;
-apoi pot continua căutarea.

5.Undo / Redo
-pot anula ultima acțiune;
-pot reface acțiunea anulată.

6.Comenzi simple
- :w salvează;
- :q iese;
- :wq salvează și iese;
- :find ceva caută text;
- :help afișează comenzile.

7.Status bar
-nume fișier;
-linie/coloană curentă;
-dacă fișierul este modificat.
*/

void showMenu()
{
    printf("1.View Text\n");
    printf("2.Add text\n");
    printf("0.Quit\n");
    printf("Your option: ");
}

int main()
{
    Editor editor;
    constructEditor(&editor);

    do
    {
        int option;
        showMenu();
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            printf("Your text:\n%s\n",editor.doc.text);
            break;

        case 2:
            printf("Your text: ");
            addText(&editor);
            printf("Your text has been saved succesfully!\n");
            break;

        case 0:
            editor.running = 0;
            break;

        default:
            printf("Enter a valid option!\n");
        }
    }while (editor.running);

    // printf("Textul final:\n%s\n",editor.doc.text);
    // printf("Dimensiunea: %zu",editor.doc.capacity);

    destructEditor(&editor);
    return 0;
}
