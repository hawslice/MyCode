#include <stdio.h>

int main()
{
    int c, s1, t1, n1;

    s1 = 0;
    t1 = 0;
    n1 = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++s1;
        if (c == '\t')
            ++t1;
        if (c == '\n')
            ++n1;
    }
    printf("%d %d %d\n", s1, t1, n1);
    
    return 0;
}