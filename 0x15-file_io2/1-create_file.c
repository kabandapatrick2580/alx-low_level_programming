#include "main.h"
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - it creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file
 *
 * Return: 1 on success and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fp, txt_len, a_write;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		txt_len = strlen(text_content);
		a_write = write(fp, text_content, txt_len);

		if (a_write != txt_len)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
