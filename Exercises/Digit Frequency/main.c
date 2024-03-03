// Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

int frequency[10] = {0};
int digit;

int main() {
    char data[MAX_LEN];
    
    scanf("%s", data);
    
    int length = strlen(data);
    
    for(int i=0; i<length; i++) {
        if(isdigit(data[i])) {
            digit = data[i] - '0';
            frequency[digit] += 1;
        }
    }
    
    for(int i=0; i<10; i++) {
        printf("%d ", frequency[i]);
    }
    
    printf("\n");
      
    return 0;
}

// Sample Input 1
// a11472o5t6

// Sample Input 2
// lw4n88j12n1

// Sample Input 3
// 1v88886l256338ar0ekk
