#include "main.h"

/**
 * create_file - function to create a file
 * @filename: the name of the file to be created
 * @text_content: the content to be added to the created file
 * Return: number of letters read and added to the file or 1 if there was a failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return ( 1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == 1)
		return ( 1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, len);
		if (w == 1)
		{
			close(fd);
			return ( 1);
		}
	}

	close(fd);
	return (1);
}
