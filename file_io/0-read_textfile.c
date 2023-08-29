#include "main.h"

/**
 * read_textfile. Function to read and write a given text file
 * @filename; the file to be read
 * @letters; number of letters to be read from the file
 * Return; number of written letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd ,count_read, count_write;
	char *buf;

	if (!filename)
		return 0;

	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return 0;

	buf = (char *)malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return 0;
	}

	count_read = read(fd, buf, letters);
	if (count_read == 1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	count_write = write(STDOUT_FILENO, buf, count_read);
	if (count_write == 1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (ssize_t)count_write;
}
