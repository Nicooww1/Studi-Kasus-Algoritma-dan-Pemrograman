#include <stdio.h>

int main() {
    long long a, b, c;
    long long temp;
    long long hasil;

    scanf("%lld %lld %lld", &a, &b, &c);

    // Urutkan a, b, c dari kecil ke besar
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Jika ada dua nilai yang sama
    if (a == b || b == c) {
        hasil = 0;
    } else {
        // Ambil jarak terkecil
        if (b - a < c - b)
            hasil = b - a;
        else
            hasil = c - b;
    }

    printf("%lld\n", hasil);

    return 0;
}
