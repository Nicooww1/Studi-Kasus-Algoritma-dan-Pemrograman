#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    long long sum = 0;
    long long A;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lld", &A);
        sum += A;
    }

    printf("%lld\n", llabs(sum));

    return 0;
}