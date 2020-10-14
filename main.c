#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kolumna;
    int wiersz;

    for(wiersz=1; wiersz<=10; wiersz++)
    {
        for(kolumna=1; kolumna<=10; kolumna++)
        {
            if(kolumna*wiersz<10)
            {
            printf(" ");
            }

            printf("%d ", kolumna*wiersz);

        }
        puts("\n");
    }
    return 0;
}
