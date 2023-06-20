#include "main.h"


/**
 * _islower -  checks for lowerse character
 * Return: 1 lowercase, 0 otherwise
 */


int _islower(int p)
{
	if (p >= 97 && p <= 122)
	{
		return (1);
	}
	return (0);
}
