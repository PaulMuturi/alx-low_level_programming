#include "main.h"

/**
  *read_textfile - reads a text file and prints it to the POSIX standard output
  *@filename: file to be read
  *@letters: number of letters to be read and printed
  *
  *Return: number of letters read and printed, 0 on failure
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	int fd;
	size_t i;
	ssize_t bt_rd, bt_wr, count = 0;

	if (!letters || !filename)
		return (0);

	ch = malloc(sizeof(char) * letters);
	if (!ch)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(ch);
		return (0);
	}

	bt_rd = read(fd, ch, letters);
	if (bt_rd <= 0)
	{
		free(ch);
		return (0);
	}
	for (i = 0; i < bt_rd / sizeof(char); i++)
	{
		bt_wr = write(1, ch + i, sizeof(char));
		if (bt_wr <= 0 || bt_wr != sizeof(char))
		{
			free(ch);
			return (0);
		}
		count++;
	}
	free(ch);
	return (count);
}
