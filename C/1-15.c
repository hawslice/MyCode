#include <stdio.h>

float convert(float f);

int main()
{
    float fahr, celsius;

    printf("Please enter Fahrenheit\n");
    scanf("%f", &fahr);
    celsius = convert(fahr);
    printf("%.1fF = %.1fC\n", fahr, celsius);
    
    return 0;
}

float convert(float f)
{
    float c;
    
    c = (5.0/9.0) * (f - 32.0);

    return c;
}