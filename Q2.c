#include <stdio.h>
#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("%f C = %f F", c, f);
 
}

