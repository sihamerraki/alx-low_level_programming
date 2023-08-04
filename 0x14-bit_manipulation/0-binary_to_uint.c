#include <stdio.h>

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number.
 * Return: The converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
        {
            result <<= 1;
        }
        else if (b[i] == '1')
        {
            result = (result << 1) | 1;
        }
        else
        {
            return 0;
        }
    }

    return result;
}
