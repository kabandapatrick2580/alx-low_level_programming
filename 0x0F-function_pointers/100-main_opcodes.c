#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int bytes);

/**
 * main - printing opcodes
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:always 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(bytes);
	return (0);
}

/**
 * print_opcodes - function to print
 * @bytes:number of bytes
 */
void print_opcodes(int bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *) &main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(ptr + i));
	}
	printf("\n");
}
