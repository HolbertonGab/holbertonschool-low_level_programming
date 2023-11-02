#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
	printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
