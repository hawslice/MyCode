#include <stdio.h>

int main()
{
    int a = 1;
    int b=0;
    int c=0;
    int d=0;

    if(a>0)
    {
        if(a>1)
        b=1;
    }
    
    else
    {
        c=1;
        d=1;
    }
    printf("%d %d %d\n",b,c,d);
    return 0;
}