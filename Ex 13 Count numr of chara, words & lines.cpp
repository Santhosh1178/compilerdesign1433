#include <stdio.h>
#include <stdlib.h>

int main() {
    char text[] = "This is a sample text.\nIt contains multiple lines.\nCounting characters, words, and lines.";
    int characters = 0, words = 0, lines = 0;
    int i = 0;
    
    while (text[i] != '\0') {
        characters++;
        if (text[i] == ' ' || text[i] == '\n') {
            words++;
        }
        if (text[i] == '\n') {
            lines++;
        }
        i++;
    }
    words++; 
    lines++;
    
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}

