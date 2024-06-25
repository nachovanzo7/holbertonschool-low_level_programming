#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
/*int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}*/

#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
