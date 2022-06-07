#include <main.h>

/**
 *print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success/Correct)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

	return (0);
}
