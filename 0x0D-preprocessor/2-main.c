#include <stdlib.h>
#include <string.h>
#include <libgen.h>

/**
 * main - Entry level codes
 *
 * Return: 0
 */

int main(void)
{
	char *file_name = strdup(__FILE__);
	char *base_name = basename(file_name);

	size_t output_size = strlen(base_name) + 2;
	char *output = malloc(output_size);

	snprintf(output, output_size, "%s\n", base_name);
	write(1, output, output_size - 1);
	free(output);
	free(file_name);
	exit(0);
}
