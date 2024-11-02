#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%-5d%-5d%-5d\n", i * 5, 100 - ((i - 1) * 10 + 1), i);
    }
    return 0;
}

