#include "main.h"

/**
 *
 * _isalpha - check the character.
 *
 *@e: character
 * Return: 1 for alphabet and 0 for anything else
 *
 *
 */

int _islpha(int e)
{
	if ((e >= 65 && e <= 97) || (e >= 97 && e <= 122))
	{
		return (1);
	}
	return (0);
}
