#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int state;
    char c;

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            state = IN;
            putchar(c);
        }

        else if (state == IN)
        {    
            printf("\n");
            state = OUT;
        }
    }

    return 0;
}