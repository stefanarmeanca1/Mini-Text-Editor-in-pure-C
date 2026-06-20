#include <stdio.h>

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

_Bool isEmpty(char* string)
{
    if (*string == '\0' || *string == '\n') return 1;
    return 0;
}

// Global variables
char note[1024];
_Bool running = 1;
int option;

int main()
{
    do
    {

        printf("1.Write some text\n");
        printf("2.Display the text\n");
        printf("3.Quit\n");

        printf("Your option: ");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            printf("Your note: ");
            getchar();
            fgets(note,sizeof(note),stdin);
            printf("Your note has been saved succesfully!\n");
            break;

        case 2:
            if (isEmpty(note))
            {
                printf("There's no text\n");
                break;
            }
            else
            {
                printf("%s\n",note);
                break;
            }

        case 3:
            running = 0;
            break;
        }
    }while (running);
    return 0;
}
