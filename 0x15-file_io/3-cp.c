#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error - handles error
 *@message: message of the error
 *@name: string to be formated
 *@code: status code
 */
void error(char *message, char *name, int code)
{
	dprintf(STDERR_FILENO, message, name);
	exit(code);
}
/**
 * error_close - handles error
 *@message: message of the error
 *@fd: file descriptor
 *@code: status code
 */
void error_close(char *message, int fd, int code)
{
	dprintf(STDERR_FILENO, message, fd);
	exit(code);
}

/**
 * main - copies for a file to another
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 if successfull
 */
int main(int argc, char **argv)
{
	int fdto;
	int fdfrom, perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char *filefrom;
	char *fileto;
	char buffer[BUFFER_SIZE];
	int bytesr, bytesw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = argv[2];
	filefrom = argv[1];
	fdto = open(fileto, O_WRONLY | O_CREAT | O_EXCL | perm);
	if (fdto == -1)
	{
		fdto = open(fileto, O_WRONLY | O_TRUNC);
		if (fdto == -1)
			error("Error: Can't write to %s\n", fileto, 99);
	}
	fdfrom = open(filefrom, O_RDONLY);
	if (fdfrom == -1)
		error("Error: Can't read from file %s\n", filefrom, 98);
	while (bytesr > 0)
	{
		bytesr = read(fdfrom, buffer, sizeof(buffer) - 1);
		if (bytesr == -1)
			error("Error: Can't read from file %s\n", filefrom, 98);
		bytesw = write(fdto, buffer, bytesr);
		if (bytesw == -1)
			error("Error: Can't write to %s\n", fileto, 99);
	}
	if (close(fdto) == -1)
		error_close("Error: Can't close fd %d\n", fdto, 100);
	if (close(fdfrom) == -1)
		error_close("Error: Can't close fd %d\n", fdfrom, 100);
	return (0);
}
