#include <stdio.h>
#include <stdint.h>

int main() {
    char ch;
    char str[100];
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf(" %[^\n]s", str);
    printf("%s\n", str);

    return 0;
}