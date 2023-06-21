#include "main.h"

/**
 *
 * _isalpha - check the character.
 *
 *@p: character
 * Return: 1 for alphabet and 0 for anything else
 *
 *
 */

int _islpha(int p)
{
        if ((p >= 65 && p <= 97) || (p >= 97 && p <= 122))
        {
                return (1);
        }
        return (0);
}
