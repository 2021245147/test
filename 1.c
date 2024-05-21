#include <stdio.h>

int main() {
    int numbers[10];
    int remainders[42] = {0};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        int remainder = numbers[i] % 42;
        remainders[remainder]++;
    }

    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (remainders[i] > 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
