#include "main.h"
/**
 * _strlen_recursion - check the code
 * Return: int
 * @s: var
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}
	return (0);
}
