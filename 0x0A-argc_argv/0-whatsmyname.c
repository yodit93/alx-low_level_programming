#include <stdio.h>
/**
 * main - function to print the file name
 * @argc: number of argument parameters
 * @argv: array of list of commands
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}


