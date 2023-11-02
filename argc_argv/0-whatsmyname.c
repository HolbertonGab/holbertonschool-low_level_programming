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
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
