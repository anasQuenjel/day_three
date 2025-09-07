#include <stdio.h>
// 12345 = 54321
int main() {
    int n, r = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i != 0; i /= 10)
        r = r * 10 + (i % 10);

    printf("Reversed number: %d\n", r);

    return 0;
}
