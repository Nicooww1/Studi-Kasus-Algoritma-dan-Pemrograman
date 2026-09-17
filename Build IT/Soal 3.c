#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007LL

int compare(const void *a, const void *b) {
    long long x = *(long long *)a;
    long long y = *(long long *)b;

    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    else
        return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    long long *A = malloc(N * sizeof(long long));

    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    qsort(A, N, sizeof(long long), compare);

    long long hasil = 0;
    long long jumlahSama = 1;

    for (int i = 1; i < N; i++) {
        if (A[i] == A[i - 1]) {
            jumlahSama++;
        } else {
            hasil = (hasil + jumlahSama * (i - jumlahSama)) % MOD;
            jumlahSama = 1;
        }
    }

    hasil = (hasil + jumlahSama * (N - jumlahSama)) % MOD;

    printf("%lld\n", hasil);

    free(A);

    return 0;
}