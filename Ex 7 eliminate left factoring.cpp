#include <stdio.h>
#include <string.h>
void eliminateLeftFactoring(char *nonTerminal, char *prod1, char *prod2) {
    char newNonTerminal[50];
    sprintf(newNonTerminal, "%s'", nonTerminal);
    printf("Original Grammar:\n%s -> %s | %s\n", nonTerminal, prod1, prod2);
    printf("%s -> %s%s\n", nonTerminal, prod1, newNonTerminal);
    printf("%s -> %s | %s\n", newNonTerminal, prod1 + strlen(prod1) - 1, prod2 + strlen(prod2) - 1);
}
int main() {
    char nonTerminal = 'A';
    char prod1[] = "aﬂ";
    char prod2[] = "a?";
    eliminateLeftFactoring(&nonTerminal, prod1, prod2);
    return 0;
}
