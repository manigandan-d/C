#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = "12345";

    printf("String to Integer : %d\n", atoi(s));
    printf("String to Long Integer : %ld %ld\n", atol(s), strtol(s, NULL, 0));
    printf("String to Unsigned Long Integer : %lu\n", strtoul(s, NULL, 0));
    printf("String to Long Long Integer : %lld %lld\n", atoll(s), strtoll(s, NULL, 0));
    printf("String to Unsigned Long Long Integer : %llu\n", strtoull(s, NULL, 0));

    return 0;
}