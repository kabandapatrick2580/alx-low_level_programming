#include "main.h"

/**
 * read_textfile - it reads text file and prints it to POSIX
 * @filename: name of the file to read
 * @letters: number of letters to print
 *
 * Return: actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_a;
	char *buffer;
	size_t a_read, a_write;

	if (filename == NULL)
	{
		return (0);
	}

	file_a = fopen(filename, "r");
	if (file_a == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file_a);
		return (0);
	}
	a_read = read(fileno(file_a), buffer, letters);
	if (a_read == 0)
	{
		free(buffer);
		fclose(file_a);
		return (0);
	}
	a_write = write(STDOUT_FILENO, buffer, a_read);
	if (a_write != a_read)
	{
		free(buffer);
		fclose(file_a);
		return (0);
	}
	free(buffer);
	fclose(file_a);
	return (a_read);
}
