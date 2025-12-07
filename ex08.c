#include <stdio.h>

int main() {
    int numbers[10];
    int i;
    int sum = 0;
    float average;

    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
        sum += numbers[i];
    }

    printf("\n");

    average = sum / 10.0;

    printf("%d\n", sum);
    printf("%.2f\n", average);

    return 0;
}
