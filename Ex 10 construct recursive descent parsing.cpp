#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char input[MAX];
int index = 0;
void match(char token) {
    if (input[index] == token) {
        index++;
    } else {
        printf("Syntax error: expected '%c' but found '%c'\n", token, input[index]);
        exit(1);
    }
}
void E();
void T();
void F();
void E() {
    T();
    while (input[index] == '+' || input[index] == '-') {
        match(input[index]);
        T();
    }
}
void T() {
    F();
    while (input[index] == '*' || input[index] == '/') {
        match(input[index]);
        F();
    }
}
void F() {
    if (input[index] >= '0' && input[index] <= '9') {
        match(input[index]);
    } else if (input[index] == '(') {
        match('(');
        E();
        match(')');
    } else {
        printf("Syntax error: unexpected '%c'\n", input[index]);
        exit(1);
    }
}
int main() {
    strcpy(input, "3+(5*2)-8");
    E();
    if (input[index] == '\0') {
        printf("Input is valid.\n");
    } else {
        printf("Input is invalid.\n");
    }
    return 0;
}
