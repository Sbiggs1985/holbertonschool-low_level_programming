#include "main.h"
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: An array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
