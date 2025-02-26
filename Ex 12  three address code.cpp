#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 15, result;
    printf("Three Address Code Representation:\n");
    printf("t1 = a + b\n");
    int t1 = a + b;
    printf("t2 = t1 * c\n");
    int t2 = t1 * c;
    printf("result = t2 - b\n");
    result = t2 - b;
    printf("Final Result: %d\n", result);
    return 0;
}
