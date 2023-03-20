#include <stdlib>
/**
 * main - Entry point of the program
 *
 * Return: always 0
 */
int main(void)
{
	char *filename = __FILE__;
	char *name;
	int i;

	for (i = 0; filename[i]; i++)
	{
		if (filename[i] == '/')
		{
			name = &filename[i + 1];
		}
	}

	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
