#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int **a = malloc(r * sizeof(int *));
    // int **a = (int **)malloc(r * sizeof(int *));

    for(i=0; i<r; i++) {
        a[i] = malloc(c * sizeof(int));
        // a[i] = (int *)malloc(c * sizeof(int));
    }

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d", (*(a+i)+j));
        }
    }

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("%d ", *(*(a+i)+j));
        }
    }

    for(i=0; i<r; i++) {
        free(a[i]);
    }

    free(a);

    return 0;
}