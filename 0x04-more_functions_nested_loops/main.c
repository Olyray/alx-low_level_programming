#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _isdigit(int c);

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}

int _isdigit(int c)
{
        int check;

        check = isdigit(c);
        if (check > 0)
                return (1);
        else
                return (0);
}
