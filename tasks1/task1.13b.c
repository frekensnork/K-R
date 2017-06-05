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

    length = 0;
    for (int i = 0; i < n; i++) {
        if (histo[i] != 0)
            length = i;
    }
    length++;

    for (int i = 0; i < n; i++) {
        printf("%s%d", " | ", i + 1);
    }
    putchar('\n');
    for (int j = 1; j <= length; j++) {
        for (int i = 0; i < n; i++) {
            if (histo[i] != 0) {
                printf("%s", " | +");
                histo[i]--;
            } else {
                printf("%s", " | -");
            }
        }
        putchar('\n');
    }
}

