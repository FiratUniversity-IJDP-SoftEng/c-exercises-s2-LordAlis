#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int number;
    printf("Enter a number less than 50: ");
    scanf("%d", &number);

    if (number < 0 || number >= 50) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Factorial of %d is %llu\n", number, factorial(number));
    return 0;
}

