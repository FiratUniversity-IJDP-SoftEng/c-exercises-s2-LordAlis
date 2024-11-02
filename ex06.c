#include <stdio.h>

int main() {
    int arr[17]; 
    int index = 0;

    for (int i = 99; i >= 51; i -= 3) {  
        arr[index++] = i; 
    }

    for (int i = 0; i < 17; i++) {
        printf("%d", arr[i]);
        if (i < 16) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
