#include "main.h"


/**
 * _islower-  checks for lowerse character
 * Return: 1 lowercase, 0 otherwise
 * @c: character
 */


int _islower(int m)
{
	if (m >= 97 && m <= 122)
	{
		return (1);
	}
	return (0);
}
