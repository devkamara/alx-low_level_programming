#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, 0 if more
 * than 1 char b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
    unsigned int i = 0, num = 0;

    if (b == NULL)
    return (0);
    while (b[i])
    {
        if (!(b[i] == '0' || b[i] == '1'))
        return (0);
        num <<= 1;
        if (b[i] == '1')
        {
            num += 1;
            i++;
        }
        return(num);
    }

}