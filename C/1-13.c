#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int i, k, c, n, state;
    int num[10];

    n = 0;
    state = OUT;

    for (i = 0; i < 10; ++i)
        num[i] = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            state = IN;
            ++n;
        }
        else if(state == IN)
        {
            ++num[n];
            state = OUT;
            n = 0;
        }
    }
    for (i = 9; i > 0; --i)
    {
        printf("%d|", i);
        for (k = 0; k < num[i]; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}