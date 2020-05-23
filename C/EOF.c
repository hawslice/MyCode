#include <stdio.h>

int main()
{
    int c;
    int e;

    c = getchar() != EOF;
    e = EOF;
    printf("%d\t%d\n", c, e);

    return 0;
}