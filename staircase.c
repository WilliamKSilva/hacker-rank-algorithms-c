#include <stdio.h>
#include <stdlib.h>

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        char* currentLine = malloc(n + 1 * sizeof(char));

        int emptySpaces = n - i;        
        for (int j = 1; j <= emptySpaces; j++) {
            currentLine[j - 1] = ' ';
        }
        
        int symbolPosition = emptySpaces;
        for (int w = 1; w <= i; w++) {
            currentLine[symbolPosition] = '#';
            symbolPosition++;
        }
        
        currentLine[n] = '\n';
        
        printf("%s", currentLine);
        
        free(currentLine);
    }
}

int main() {
    staircase(5);
}
