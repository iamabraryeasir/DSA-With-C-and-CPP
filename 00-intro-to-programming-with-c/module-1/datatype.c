#include <stdio.h>

int main()
{
    int n;            // %d     4 bytes
    long long int ln; // %lld   8 bytes
    float f;          // %f     4 bytes
    double d;         // %lf    8 bytes
    char c;           // %c     1 bytes

    printf("%d\n", sizeof(n));
    printf("%d\n", sizeof(ln));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(c));

    return 0;
}