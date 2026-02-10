#include "main.h"

/**
 * _isalpha - Rertuns true if char c is alpha
 * @c: the character to be checked
 *
 * Return: returns 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
