#include "main.h"


/**
 * _islower -  checks for lowerse character
 * Return: 1 lowercase, 0 otherwise
 */


int _islower(int e)
{
	if (e >= 97 && e <= 122)
	{
		return (1);
	}
	return (0);
}
