#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);

void copy(char to[], char from[]);

int main() {

    int max_length;
    int temp_length;
    char line[MAXLINE];
    char longest[MAXLINE];


    for (max_length = 0; (temp_length = get_line(line, MAXLINE)) > 0;) {
        if (temp_length > max_length) {
            max_length = temp_length;
            copy(longest, line);
        }
    }

    if (max_length > 0) {
        printf("%s", longest);
    }
    return 0;
}

int get_line(char s[], int limit) {
    int ch, i;


    for (i = 0; i < limit - 1 && (ch = getchar()) != EOF && ch != '\n'; ++i) {
        s[i] = ch;
    }

    if (ch == '\n') {
        s[i] = ch;
        ++i;
    }

    s[i] = '\0';

    return i;
}

void copy(char to[], char from[]) {
    int i;

    for (i = 0; (to[i] = from[i]) != '\0'; ++i) { ;
    }
}
