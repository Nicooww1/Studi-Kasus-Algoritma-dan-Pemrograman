#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a, b;
    scanf("%lld", &a);
    scanf("%lld", &b);
    
    if (a > 0 && b < 0){
        printf ("-");
    }else if (a < 0 && b > 0){
        printf ("+");
    }else if (a > 0 && b > 0){
    if (a == 1 || b == 1){
        printf ("+");
     }else {
        printf ("*");
     }
    }else if (a < 0 && b < 0){
        printf ("*");
    }
        /* Enter your code here. Read input from STDIN. Printoutput 
        to STDOUT*/    
    return 0;
}
