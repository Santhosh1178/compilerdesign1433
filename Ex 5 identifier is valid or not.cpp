#include <stdio.h>
#include <ctype.h>
int isValidIdentifier(char *identifier) {
    if (!isalpha(identifier[0]) && identifier[0] != '_') {
        return 0;
    }
    for (int i = 1; identifier[i] != '\0'; i++) {
        if (!isalnum(identifier[i]) && identifier[i] != '_') {
            return 0;
        }
    }
    return 1;
}
int main() {
    char *identifiers[] = {"myVariable", "1invalid"};
    int n = 5;
    for (int i = 0; i < n; i++) {
        if (isValidIdentifier(identifiers[i])) {
            printf("The identifier '%s' is valid.\n", identifiers[i]);
        } else {
            printf("The identifier '%s' is not valid.\n", identifiers[i]);
        }
    }
    return 0;
}
