#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char tab[5][100]={{"Kielbasa"}, {"Browary"}, {"Inne towary"}, {"Dolary"}, {"Piąta obietnica"}};
    int i;
    srand(time(NULL));
    i=rand()%6;
    printf("%s", tab[i]);
}


