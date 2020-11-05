#include <stdio.h>
#include <stdlib.h>


int funkcja(int a, int b)
{
    printf("%d, %d\n",a, b);
}

int main()
{
    int i=5;
    funkcja(++i,i++);
    return 0;
}
