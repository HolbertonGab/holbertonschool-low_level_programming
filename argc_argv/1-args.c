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
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
