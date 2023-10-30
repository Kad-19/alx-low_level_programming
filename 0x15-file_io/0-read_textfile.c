#include "main.h"

#define BUFFER_SIZE 1024
/**
 * read_textfile - reads text from a file and prints it to the stdout
 * @filename: the name of the file
 * @letters: number of chars to be printed
 * Return: 0 or the actual numbers of chars it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytesr = 1;
	ssize_t bytesw;
	ssize_t total_byte = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while (bytesr > 0)
	{
		bytesr = read(fd, buffer, sizeof(buffer) - 1);
		if (bytesr == -1)
		{
			close(fd);
			return (0);
		}
		buffer[bytesr] = '\0';
		total_byte += bytesr;
		if (total_byte <= (ssize_t)letters)
		{
			bytesw = write(STDOUT_FILENO, buffer, bytesr);
			if (bytesw == -1 || bytesw != bytesr)
			{
				close(fd);
				return (0);
			}
		}
	}
	close(fd);
	return (total_byte);
}
