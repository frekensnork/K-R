//
// Created by Frekensnork on 05.06.2017.
//
#include <stdio.h>

int main() {
    int length = 0, n = 10, histo[n];
    int c;

    for (int i = 0; i < n; i++)
        histo[i] = 0;

    do {
        c = getchar();
        if (c != ' ' && c != '\t' && c != '\n')
            ++length;
        else {
            histo[length - 1]++;
            length = 0;
        }
    } while(c != '\n');

    for (int i = 0; i < n; i++) {
        if (histo[i] == 0)
            continue;
        printf("%d%s", i + 1, ":");
        for (int j = 1; j <= histo[i]; j++) {
            putchar('-');
        }
        putchar('\n');
    }
    return 0;
}

