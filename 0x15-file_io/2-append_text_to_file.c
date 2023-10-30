#include "main.h"

/**
 * append_text_to_file - appends a text to the end of a file
 * @filename: the name of the file
 * @text_content: the text to be appended
 * Return: 1 if successful, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesw;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT | O_EXCL);
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
	close(fd);
	return (1);
}
