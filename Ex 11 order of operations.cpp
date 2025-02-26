#include <stdio.h>
int main() {
    int result;
    int a = 10, b = 2, c = 5;
    result = a + b * c;
    printf("Result of 10 + 2 * 5 = %d\n", result);
    result = (a + b) * c;
    printf("Result of (10 + 2) * 5 = %d\n", result);
    result = a * b / c;
    printf("Result of 10 * 2 / 5 = %d\n", result);
    result = a / b * c;
    printf("Result of 10 / 2 * 5 = %d\n", result);
    result = a - b + c;
    printf("Result of 10 - 2 + 5 = %d\n", result);
    return 0;
}
