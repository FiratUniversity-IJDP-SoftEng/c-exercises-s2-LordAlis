#include <stdio.h>
int main() {
    int rows = 5;  

    for (int i = 1; i <= rows; i++) {
        // print code
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print of the increasing
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print of the decreasing
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    // The lower part of the diamond shape 
    for (int i = rows - 1; i >= 1; i--) {
        // Printing the leading places
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print of the increasing
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print of the decreasing
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}

