#include "monty.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: Exit success or failure
*/
int main(int argc, char *argv[])
{
	FILE *file;
	Stack stack;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	if (argc != 2)
	{
	fprintf(stderr, "Usage: monty file\n");
	return EXIT_FAILURE;
	}

	file = fopen(arv[1], "r");
	if (file == NULL)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	return (Exit_FAILURE);
	}

	while ((read

