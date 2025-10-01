#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

enum {
    DO, ELSE, IF, WHILE, LBRA, RBRA, LPAR, RPAR,
    PLUS, MINUS, LESS, SEMI, EQUAL, UINT, ID, EOI
};

char ch;
char curtoken;

int int_val;

int nextchar() {
    ch = getchar();
    return ch;
}

int maketoken() {
    again: switch (ch) {
        case ' ': case '\n':
            nextchar();
            goto again;
        case EOF:
            curtoken = EOI;
            break;
        case '{':
            nextchar();
            curtoken = LBRA;
            break;
        case '}':
            nextchar();
            curtoken = RBRA;
            break;
        case '(':
            nextchar();
            curtoken = LPAR;
            break;
        case ')':
            nextchar();
            curtoken = RPAR;
            break;
        case '+':
            nextchar();
            curtoken = PLUS;
            break;
        case '-':
            nextchar();
            curtoken = MINUS;
            break;
        case '<':
            nextchar();
            curtoken = LESS;
            break;
        case ';':
            nextchar();
            curtoken = SEMI;
            break;
        case '=':
            nextchar();
            curtoken = EQUAL;
            break;
        default:
      
    }
    return curtoken;
}

int main() {
    return 0;
}