#include "main.h"
/**
  *main - copies the content of a file to another file
  *@argc: arguments count
  *@argv: array of strings argumentns
  *
  *Return: 1
  */

int main(int argc, char *argv[])
{
	int fd1, fd2, fd, i, buf_size = 1024;
	ssize_t bt_rd;
	char buf[1024], *file_from, *file_to;

	if (argc != 3)
		exit_err("Usage: cp file_from file_to", "", 97);
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);

	if (fd1 < 0)
		exit_err("Error: Can't read from file NAME_OF_THE_FILE", file_from, 98);
	if (access(file_to, F_OK) == 0)
		fd2 = open(file_to, O_WRONLY | O_APPEND | O_TRUNC);
	else
		fd2 = open(file_to, O_CREAT | O_WRONLY | O_APPEND, 0664);
	if (fd2 < 0)
		exit_err("Error: Can't write to NAME_OF_THE_FILE", file_to, 99);
	while (1)
	{
		bt_rd = read(fd1, buf, buf_size);
		if (bt_rd <= 0)
			break;
		for (i = 0; i < buf_size; i++)
		{
			if (*(buf + i) == '\0')
				break;
			write(fd2, (buf + i), sizeof(char));
		}
	}
	if (close(fd1) < 0 || close(fd2 < 0))
	{
		fd = fd1 ? fd1 : fd2;
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
  *exit_err - prints error message and exits with status code
  *@msg: error message
  *@fn: file name addressed by the error
  *@n: error code
  *
  *Return: void
  */
void exit_err(char *msg, char *fn, int n)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, fn);
	exit(n);
}
