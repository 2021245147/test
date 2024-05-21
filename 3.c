#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        printf("%d\n", lcm(A, B));
    }

    return 0;
}
