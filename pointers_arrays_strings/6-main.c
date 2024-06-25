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
    puts2(str);
    return (0);
}*/

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
