#include <stdio.h>
#include <stdlib.h>
void generateAssembly(int a, int b) {
    printf("MOV R1, %d\n", a);
    printf("MOV R2, %d\n", b);
    printf("ADD R3, R1, R2\n");
    printf("MUL R4, R3, 2\n");
    printf("MOV R5, R4\n");
    printf("PRINT R4, R5\n");
}
int main() {
    int a = 10, b = 5;
    generateAssembly(a, b);
    return 0;
}
