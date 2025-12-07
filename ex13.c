#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0 || n >= 50) {
        printf("Invalid input\n");
        return 0;
    }

    printf("%llu\n", factorial(n));

    return 0;
}
