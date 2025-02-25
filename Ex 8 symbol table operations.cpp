#include <stdio.h>
#include <string.h>
#define MAX_SYMBOLS 10
struct Symbol {
    char name[20];
    char type[20];
};
struct Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;
void addSymbol(char *name, char *type) {
    if (symbolCount >= MAX_SYMBOLS) {
        printf("Symbol table is full.\n");
        return;
    }
    strcpy(symbolTable[symbolCount].name, name);
    strcpy(symbolTable[symbolCount].type, type);
    symbolCount++;
}
int searchSymbol(char *name) {
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}
void displaySymbolTable() {
    printf("\nSymbol Table:\n");
    printf("Name\tType\n");
    for (int i = 0; i < symbolCount; i++) {
        printf("%s\t%s\n", symbolTable[i].name, symbolTable[i].type);
    }
}
int main() {
    char name[20], type[20];
    int choice, index;
    while (1) {
        printf("\nSymbol Table Operations:\n");
        printf("1. Add Symbol\n");
        printf("2. Search Symbol\n");
        printf("3. Display Symbol Table\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter symbol name: ");
                scanf("%s", name);
                printf("Enter symbol type: ");
                scanf("%s", type);
                addSymbol(name, type);
                break;
            case 2:
                printf("Enter symbol name to search: ");
                scanf("%s", name);
                index = searchSymbol(name);
                if (index != -1) {
                    printf("Symbol '%s' found with type '%s'.\n", symbolTable[index].name, symbolTable[index].type);
                } else {
                    printf("Symbol '%s' not found.\n", name);
                }
                break;
            case 3:
                displaySymbolTable();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
