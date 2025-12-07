#include <stdio.h>

int main() {
    int num;
    int count = 0;
    int sum = 0;
    float average;

    scanf("%d", &num);

    while (num != -1) {
        sum += num;
        count++;
        scanf("%d", &num);
    }

    if (count > 0)
        average = sum / (float)count;
    else
        average = 0;

    printf("%d\n", count);
    printf("%d\n", sum);
    printf("%.2f\n", average);

    return 0;
}
