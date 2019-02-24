#include <stdio.h>

#define MAXLEN 100

void trim(char buf[]);
int skipSpaces();

int main()
{
	char buf[MAXLEN];
	trim(buf);
	printf("\ntrim:\n%s", buf);
	return 0;
}

void trim(char buf[])
{
	int i = 0;
	int c = getchar();
	while (c != EOF && i < MAXLEN - 2) {
                if (c == ' ' || c == '\t') {
			buf[i++] = ' ';
			c = skipSpaces();
	        }
		if (c == '\n') {
			// Надо обработать также случай, когда первая строка пустая
			if (i > 0 && buf[i - 1] == '\n') {
				i--;
			}
			if (i > 1 && buf[i - 1] == ' ' && buf[i - 2] == '\n') {
				i -= 2;
			}
		}
		if (c != EOF) {
			buf[i++] = c;
			c = getchar();
		}
	}
	buf[i] = '\0';
}

int skipSpaces() {
	int c;
	while ((c = getchar()) == ' ' || c == '\t') {
	}
	return c;
}
