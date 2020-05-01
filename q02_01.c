#include <stdio.h>

int main() {
    char input[20];
    printf("What is the input string? ");
    scanf("%s", input);
    int count=0;
    for(;input[count]!='\0';++count);
    printf("%s has %d characters.", input, count);
    return 0;
}