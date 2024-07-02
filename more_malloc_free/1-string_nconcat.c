#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatena dos strings
 *Return: retorna string concatenado
 *@s1: string 1
 *@s2: string 2
 *@n: longitud de string 2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int sum, len = 0, len2 = 0, i, x = 0;
        char *p;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (i = 0; s1[i] != '\0'; i++)
                len++;

        for (i = 0; s2[i] != '\0'; i++)
                len2++;

        if (len2 > n)
                sum = (len - 1) + n;

        else
                sum = (len - 1) + len2;

        p = malloc(sizeof(char) * (sum));

        if (p == NULL)
                return (NULL);

        for  (i = 0; i <= (sum); i++)
        {
                if (i <= len)
                        p[i] = s1[i];

                if (i >= len && x <= (len2))
                {
                        p[i] = s2[x];
                        x++;
                }

        }

        p[sum] = '\0';

        return (p);
}

	return (p);
}
