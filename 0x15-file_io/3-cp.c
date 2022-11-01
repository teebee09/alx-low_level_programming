#include "main.h"

int close_error(int fd);
void read_error(char *filename);
void write_error(char *filename);

/**
 * main - copies the content of a file to another file.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: always return 0, or exit.
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_file_from, fd_file_to;
	ssize_t bytes_counted = 1;

	/* check number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open and check fd for file_from */
	fd_file_from = open(argv[1], O_RDONLY);
	if (fd_file_from < 0)
	{
		write_error(argv[2]);
		close_error(fd_file_from);
		exit(99);
	}

	/* copy content - loop checks end of file (file_from) */
	while (bytes_counted)
	{
		/* read the next 1020 bytes in file_from and check read error */
		bytes_counted = read(fd_file_from, buffer, 1024);
		if (bytes_counted < 0)
		{
			read_error(argv[1]);
			close_error(fd_file_from);
			close_error(fd_file_to);
			exit(98);
		}
	}
}











