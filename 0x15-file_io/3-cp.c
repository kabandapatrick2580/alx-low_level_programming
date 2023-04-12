#include "main.h"
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - copies contenet from one file to another
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: always 1 on success
 */
int main(int argc, char *argv[])
{
	int fileto, filefrom, bread, bwrite;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bread = read(filefrom, buffer, BUFFER_SIZE)) > 0)
	{
	bwrite = write(fileto, buffer, bread);
		if (bwrite != bread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(filefrom) == -1 || close(fileto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		exit(100);
	}
	return (0);
}
