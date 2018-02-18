//
// Created by frekensnork on 18.02.18.
//
#include <stdio.h>

int main() {

    int c = 0, n = 256, hist[n];

    for (int i = 0; i < n; i++) {
        hist[i] = 0;
    }

    while (c != '\n') {
        c = getchar();
        hist[c]++;
    }

    for (int i = 0; i < n; i++) {
        if (hist[i] > 0 && i != 10) {
            printf("%c%5c", '|', (char) i);
        }
    }
    printf("%c%c", '|', '\n');

    for (int i = 0; i < n; i++) {
        if (hist[i] > 0 && i != 10) {
            printf("%c%5d", '|', hist[i]);
        }
    }
    printf("%c", '|');

}

