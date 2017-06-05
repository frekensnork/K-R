//
// Created by frekensnork on 25.05.17.
//
#include <stdio.h>

int main() {
    int lower = 0, upper = 300, step = 20;
    float fahr = lower, celsius;

    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.0f\n", fahr+=step, celsius);
    }

    return 0;
}