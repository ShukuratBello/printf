#include "main.h"

/**
 * _strlen - retun len of a string
 * @s: pointer
 * Return: cint _strlen(char *s)
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

} 
