#include <stdio.h>
#include <stdint.h>

// Eg. 1

// struct Demo
// {
//     char c;
//     int a;
// };

// int main()
// {
//     struct Demo d;

//     printf("%ld\n", sizeof(d));

//     return 0;
// }

// Eg. 2

struct Dataset {
    char data1;
    int data2;
    char data3;
    short data4;
};

int main() {
    struct Dataset data;
    
    data.data1 = 0x11;
    data.data2 = 0x12345678;
    data.data3 = 0x22;
    data.data4 = 0x1010;

    uint8_t *ptr = (uint8_t *)&data;

    int totalSize = sizeof(data);

    printf("%d\n", totalSize);

    for(int i=0; i<totalSize; i++) {
        printf("%p    %x\n", ptr, *ptr);
        ptr++;
    }

    printf("%ld\n", sizeof(struct Dataset));

    return 0;
}
