#include <stdio.h>

int main() {
    int number, count = 0, sum = 0;
    float average;

    printf("Enter numbers (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &number);
        if (number == -1) break;
        sum += number;
        count++;
    }

    if (count > 0) {
        average = sum / (float)count;
        printf("Total numbers entered: %d\nSum: %d\nAverage: %.2f\n", count, sum, average);
    } else {
        printf("No numbers other than -1 entered.\n");
    }

    return 0;
}

