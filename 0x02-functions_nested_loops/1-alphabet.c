#include "main.h"
	/**
	 * print_alphabet - print all alphabet in lowercase
	 *Description: function to print lower case
	 * Return: print alphabet in lower
	 */

	void print_alphabet(void)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
