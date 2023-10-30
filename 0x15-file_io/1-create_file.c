#include "main.h"

/**
 * create_file - creates a file and writes a text in it
 * @filename: the name of the file
 * @text_content: the text to be written to the file
 * Return: 1 if succefful, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesw;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
		{
			len = strlen(text_content);
			bytesw = write(fd, text_content, len);
			if (bytesw == -1 || bytesw != len)
			{
				close(fd);
				return (-1);
			}
		}
	}
	else
	{
		fd = open(filename, O_CREAT | O_RDWR | S_IRUSR | S_IWUSR);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
		{
			len = strlen(text_content);
			bytesw = write(fd, text_content, len);
			if (bytesw == -1 || bytesw != len)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);
	return (1);
}
