#include "main.h"
#include <stdio.h>

/**
 * main - Printing arguments
 * @argc: argument count
 * @argv: array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
