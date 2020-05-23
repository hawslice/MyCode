#include <stdio.h>

int main()
{
    int c, n;

    n = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
            putchar(c);
        else if (n != ' ')
            putchar(c);
        n = c;
    }
    
    return 0;
}