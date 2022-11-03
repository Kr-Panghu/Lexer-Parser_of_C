#include <stdio.h>
#include <stdlib.h>

int main(){
    int64_t a = 10;
    uint64_t b = 10;
    printf("10");
    printf("20");
}

/*
%nonassoc '='
%left OR
%left AND
%left '<' LE '>' GE 'EQ' 'NE'
%left '+' '-'
%left '*' '\' '%'
%left '!'
%left '(' ')'
%left '{' '}'
%right ';'
*/