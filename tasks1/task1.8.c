//
// Created by Frekensnork on 05.06.2017.
//
#include <stdio.h>

int main() {
    int space = 0, tabs = 0, enter = 0;
    int c;

    while((c = getchar()) != EOF) {
        switch (c) {
            case ' ' : space++;
            case '\t' : tabs++;
            case '\n' : enter++;
            default : break;
        }
    }
    printf("%d\n%d\n%d\n", space, tabs, enter);
    return 0;
}
