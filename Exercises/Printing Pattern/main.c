#include <stdio.h>

// 0 0 0 0 0 0 0 0 0 0 0
// 0 1 1 1 1 1 1 1 1 1 0
// 0 1 2 2 2 2 2 2 2 1 0
// 0 1 2 3 3 3 3 3 2 1 0
// 0 1 2 3 4 4 4 3 2 1 0
// 0 1 2 3 4 5 4 3 2 1 0
// 0 1 2 3 4 4 4 3 2 1 0
// 0 1 2 3 3 3 3 3 2 1 0
// 0 1 2 2 2 2 2 2 2 1 0
// 0 1 1 1 1 1 1 1 1 1 0
// 0 0 0 0 0 0 0 0 0 0 0

// int n = 5;

// int findMin(int a, int b) {
//     return a<b ? a : b;
// }

// int main() {
//     n = n * 2;

//     for(int row=0; row<=n; row++) {
//         for(int col=0; col<=n; col++) {
//             int atEveryIndex = findMin(findMin(row, col), findMin(n-row, n-col));

//             printf("%d ", atEveryIndex);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// 5 5 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 3 3 4 5
// 5 4 3 2 2 2 2 2 3 4 5
// 5 4 3 2 1 1 1 2 3 4 5
// 5 4 3 2 1 0 1 2 3 4 5
// 5 4 3 2 1 1 1 2 3 4 5
// 5 4 3 2 2 2 2 2 3 4 5
// 5 4 3 3 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5 5 5

// int n = 5;

// int findMin(int a, int b) {
//     return a<b ? a : b;
// }

// int main() {
//     int origN = n;
//     n = n * 2;

//     for(int row=0; row<=n; row++) {
//         for(int col=0; col<=n; col++) {
//             int atEveryIndex = origN - findMin(findMin(row, col), findMin(n-row, n-col));

//             printf("%d ", atEveryIndex);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

int n = 5;

int findMin(int a, int b) {
    return a<b ? a : b;
}

int main() {
    int origN = n;
    n = n * 2;

    for(int row=1; row<n; row++) {
        for(int col=1; col<n; col++) {
            int atEveryIndex = origN - findMin(findMin(row, col), findMin(n-row, n-col)) + 1;

            printf("%d ", atEveryIndex);
        }

        printf("\n");
    }

    return 0;
}