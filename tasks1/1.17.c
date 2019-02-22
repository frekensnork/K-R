#include <stdio.h>

#define MAXLINE 21

int getLine(char str[]);

int main()
{
    int len;
    char str[MAXLINE + 1];
    while ((len = getLine(str)) != 0) {
        printf("%d\n", len);
        if (len == MAXLINE) {
            printf("%s", str);
        }
    }  
    return 0;
}

int getLine(char str[])
{
    int c, i = 0;
    while((c = getchar()) != '\n' && c != EOF) {
        if (i != MAXLINE) {
            str[i] = c;
            i++;
	}
    }
    str[i] = '\n';
    return i;
}
