#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100
int isValidGrammar(const char *str) {
    if (isupper(str[0]) && str[strlen(str) - 1] == '.') {
        return 1;
    }
    return 0;
}
int main() {
    char input[MAX_LEN] = "This is a valid sentence.";
    if (isValidGrammar(input)) {
        printf("The sentence is framed as per the rules of grammar.\n");
    } else {
        printf("The sentence is not framed as per the rules of grammar.\n");
    }
    return 0;
}
