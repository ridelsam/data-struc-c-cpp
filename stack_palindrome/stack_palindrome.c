#include <stdio.h>
#include <stdlib.h>
#include "stack_palindromefunc.c"


int main()
{
    char s[100];
    printf("Please enter the string: ");
    scanf("%s", s);

    palindrome_check(s);

    return 0;
}