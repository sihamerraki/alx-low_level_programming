#include "main.h"

/**
 * _islower-  checks for lowerse character
 * @c: check character
 * Return: 1 lowercase, 0 otherwise
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
