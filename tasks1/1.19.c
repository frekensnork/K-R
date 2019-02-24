#include <stdio.h>

#define MAXLEN 100

void reverse(char s[]);

inr main() {
	inc c;
	while ((c = getchar()) != EOF && c != '\n') {
		
	}
}

void reverse(char s[]) {
	int i = 0;
	while (s[i] != EOF) {
		i++;
	}
	int mediana = i / 2, last = i - 1, buf;
	for (i = 0; i < mediana; i++) {
		buf = s[last - i];
		s[last - i] = s[i];
		s[i] = buf;
	}
}

int getLine(char s[], int lim) {
	int c, i = 0;
	while ((c = getchar()) != EOF && c != '\n' && i < lim - 1) {
		s[i++] = c;
	}
	// Можно уместить еще 1 символ, если выход из цикла произошел из-за макс.размера строки
	if (c == '\n') {
		s[i++] = c;
	}
        s[i] = EOF;
	return i;
}
