#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP 100
#define BUFSIZE 100
#define NUMBER '0'

int getop(char []);

int getch();

void ungetch(int);

void push(double);

double pop();


/* reverse Polish calculator */
int main() {
    int type;
    double op2;
    char s[MAXOP];

    while ((c = getchar()) != EOF) {
        if (isdigit(c)) {
            push(c);
        } else if (isoperator(c)) {
            pop(c);
        } else if (c = '\n') {
            result = pop
        } else {
            error();
        }
    }

}


/* getop: get next character or numeric operand */
int getop(char s[]) {

}


