#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N + 2; i++) {
        printf("@");
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("@");
        for (int j = 0; j < N; j++) {
            printf(" ");
        }
        printf("@\n");
    }

    for (int i = 0; i < N + 2; i++) {
        printf("@");
    }
    printf("\n");

    return 0;
}
