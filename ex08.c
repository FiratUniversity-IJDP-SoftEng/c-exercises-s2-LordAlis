#include <stdio.h>
int main() {
    int numbers[10], sum = 0;
    float average;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    average = sum / 10.0;
    printf("Numbers entered: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nSum: %d\nAverage: %.2f\n", sum, average);
    return 0;
}
