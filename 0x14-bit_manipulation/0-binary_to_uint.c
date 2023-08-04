#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    if (!b)
        return 0;

    unsigned int dec_val = 0;

    while (*b)
    {
        if (*b < '0' || *b > '1')
            return 0;
        
        dec_val = (dec_val << 1) | (*b - '0');
        b++;
    }
}
