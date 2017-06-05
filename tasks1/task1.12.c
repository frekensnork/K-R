//
// Created by Frekensnork on 05.06.2017.
//
#include <stdio.h>

int main() {
    int c;
    char flag = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && flag == 0) {
            putchar('\n');
            flag = 1;
        }
        else if (c != ' ') {
            putchar(c);
            flag = 0;
        }
    }
}

