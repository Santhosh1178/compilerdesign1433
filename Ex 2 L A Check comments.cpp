#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_ID_LENGTH 20
int isOperator(char ch) {
    char operators[] = "+-*/=<>!&|";
    for (int i = 0; i < strlen(operators); i++) {
        if (ch == operators[i])
            return 1;
    }
    return 0;
}
int isKeyword(char *str) {
    char *keywords[] = {"int", "float", "if", "else", "while", "return", "for", "do", "char", "double"};
    for (int i = 0; i < 10; i++) {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}
void lexicalAnalyzer(char *code) {
    int i = 0;
    while (code[i] != '\0') {
        if (isspace(code[i])) { 
            i++; 
            continue;
        }
        if (code[i] == '/' && code[i + 1] == '/') {
            printf("Single-line comment detected\n");
            while (code[i] != '\n' && code[i] != '\0')
                i++;
            continue;
        }
        if (code[i] == '/' && code[i + 1] == '*') {
            printf("Multi-line comment detected\n");
            i += 2;
            while (code[i] != '\0' && !(code[i] == '*' && code[i + 1] == '/'))
                i++;
            if (code[i] != '\0') i += 2;
            continue;
        }
        if (isalpha(code[i]) || code[i] == '_') {
            char identifier[MAX_ID_LENGTH];
            int j = 0;
            while (isalnum(code[i]) || code[i] == '_') {
                if (j < MAX_ID_LENGTH - 1) identifier[j++] = code[i];
                i++;
            }
            identifier[j] = '\0';
            if (isKeyword(identifier))
                printf("Keyword: %s\n", identifier);
            else
                printf("Identifier: %s\n", identifier);
            continue;
        }
        if (isdigit(code[i])) {
            char number[20];
            int j = 0;
            while (isdigit(code[i]) || code[i] == '.') {
                if (j < 19) number[j++] = code[i];
                i++;
            }
            number[j] = '\0';
            printf("Constant: %s\n", number);
            continue;
        }
        if (isOperator(code[i])) {
            printf("Operator: %c\n", code[i]);
            i++;
            continue;
        }
        i++;
    }
}
int main() {
    char code[] = "int a = 10; // This is a comment\nfloat b = 20.5;/* This is a\nmulti-line comment */\nif (a < b) a = a + 5;";
    lexicalAnalyzer(code);
    return 0;
}
