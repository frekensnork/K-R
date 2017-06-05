//
// Created by Frekensnork on 05.06.2017.
//
#include <stdio.h>

int main() {
    int c;
    while((c = getchar()) != EOF) {
        switch (c) {
            case '\n' : {
                printf("%s\n", "\\n");
                break;
            }
            case '\t' : {
                printf("%s", "\\t");
                break;
            }
            case '\b' : {
                printf("%s", "\\\\");
                break;
            }
            default : printf("%c", c);
        }
    }
}

