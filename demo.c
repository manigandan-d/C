#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int) * 5);

    for(int i=0; i<5; i++) {
        printf("%d ", *(ptr+i));
    }

    free(ptr);

    ptr = calloc(5, sizeof(int));

    for(int i=0; i<5; i++) {
        printf("%d ", *(ptr+i));
    }

    free(ptr);

    return 0;
}
