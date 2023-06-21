#include "main.h"

/**
 *
 * _isalpha - check the character.
 * @c: character
 * Return: 1 for alphabet and 0 for anything else
 *
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
