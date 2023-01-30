/**
 *main - Entry point
 *
 *Return: This makes no sense to me
 */
#include "main.h"

int main(void)
{
	char mpc[] = "_putchar";

	int i;

	for (i = 0; mpc[i]; i++)
	{
		_putchar(mpc[i]);
	}
	_putchar('\n');
	return (0);
}
