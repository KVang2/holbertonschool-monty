#include "monty.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: Exit success or failure
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	fprintf(stderr, "Usage: monty file\n");
	return EXIT_FAILURE;
	}

