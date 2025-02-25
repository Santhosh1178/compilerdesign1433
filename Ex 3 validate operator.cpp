#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 100
void removeComments(char *input) {
    char *commentStart = strstr(input, "//");
    if (commentStart) {
        *commentStart = '\0';
    }
}
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
void lexicalAnalyzer(char *input) {
    for (int i = 0; i < strlen(input); i++) {
        if (isOperator(input[i])) {
            printf("Operator found: %c\n", input[i]);
        }
    }
}
int main() {
    char input[MAX_LENGTH] = "a + b - c * d / e // This is a comment";
    removeComments(input);
    printf("Input after removing comments: %s\n", input);
    lexicalAnalyzer(input);
    return 0;
}
