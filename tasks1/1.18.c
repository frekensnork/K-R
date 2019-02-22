#include <stdio.h>

#define MAXLEN 100

int getLine(char buf[]);

int main()
{
        return 0;
}

int getLine(char buf[])
{
	boolean spacePrinted = false;
	int i = 0;
        while ((c = getchar()) != EOF && c != '\n') {
	        if (c == ' ' || c == '\t') {
		        buf[i] = ' ';
			i++;
			while ((c = getchar()) == ' ' || c == '\t') {
			}
	        }
		buf[i] = c;
		i++;
        }
}
