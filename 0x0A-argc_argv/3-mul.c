#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: input
 * @argv: input
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1];
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
