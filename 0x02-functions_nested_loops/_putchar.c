#include "main.h"
#include <unistd.h>
/**
 * _putchar - function to print character to on screen
 *
 * Return: success  1.
 * On error, -1
 */
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}

