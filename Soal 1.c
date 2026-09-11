#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a, b, c;
    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &c);
    
    if (a - b == c){
        printf ("-");
    }else if (a + b == c){
        printf ("+");
    }else {
        printf ("*");
    }      /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
