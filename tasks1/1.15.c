//
// Created by frekensnork on 18.02.18.
//
#include <stdio.h>

int toCalvin(int celsius) {
    return celsius -273;
}

float toFahrenheit(float celsius) {
    return celsius * 9 / 5 + 32;
}

int main() {

    int c = 0;
    int celsius = 0;

    printf("%s", "Enter the celsius temperature\n");
    while ((c = getchar()) != '\n') {
        celsius *= 10;
        celsius += c - 48;
    }

    printf("%d\n", toCalvin(celsius));
    printf("%.2f\n", toFahrenheit(celsius));

}

