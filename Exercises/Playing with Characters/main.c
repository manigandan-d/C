// input and ouput of a character, a string and a sentence

#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);  
    scanf(" %[^\n]s", sen);
    
    printf("%c\n%s\n%s\n", ch, s, sen);

    return 0;
}

// Sample Input 
// C
// Language
// Welcome to C!!
