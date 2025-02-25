#include <stdio.h>
#include <string.h>
void eliminateLeftRecursion(char *nonTerminal, char *prod1, char *prod2) {
    char newNonTerminal[50], temp[50];
    sprintf(newNonTerminal, "%s'", nonTerminal);
    printf("Original Grammar: \n%s -> %s | %s\n", nonTerminal, prod1, prod2);
    printf("%s -> %s%s\n", nonTerminal, prod2, newNonTerminal);
    printf("%s -> %s%s | e\n", newNonTerminal, prod1, newNonTerminal);
}
int main() {
    char nonTerminal = 'A';
    char prod1[] = "Aa";
    char prod2[] = "ß";
    eliminateLeftRecursion(&nonTerminal, prod1, prod2);
    return 0;
}
