#include <stdio.h>
int main(){
    char input[]="Hello, World!\num of whitespaces & newline.";
    char ch;
    int whiteSpaceCount=0;
    int newlineCount=0;
    for (int i=0;input[i]!='\0';i++){
        ch=input[i];
        if (ch==' '||ch=='\t'){
            whiteSpaceCount++;
        }
        if (ch=='\n'){
            newlineCount++;
        }
    }
    printf("Input Text:\n%s\n",input);
    printf("\nNumber of whitespace characters: %d\n",whiteSpaceCount);
    printf("Number of newline characters: %d\n",newlineCount);
    return 0;
}
