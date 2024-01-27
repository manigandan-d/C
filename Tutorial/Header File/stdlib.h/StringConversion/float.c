#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = "5.1234";

    printf("String to Float : %f\n", strtof(s, NULL));
    printf("String to Long Integer : %lf %lf\n", atof(s), strtod(s, NULL));
    printf("String to Unsigned Long Integer : %Lf\n", strtold(s, NULL));

    return 0;
}