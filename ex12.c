#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    scanf("%d", &n);

    if (n < 0 || n >= 50) {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%llu\n", fact);

    return 0;
}
