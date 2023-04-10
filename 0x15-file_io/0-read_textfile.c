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
	int fd, to_loop = 1;
	size_t i;
	ssize_t bt_rd, bt_wr, count = 0;

	if (!letters || !filename)
		return (0);

	ch = malloc(sizeof(char) * letters);
	if (!ch)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		to_loop = 0;

	bt_rd = read(fd, ch, letters);
	if (bt_rd <= 0)
		to_loop = 0;

	for (i = 0; i < bt_rd / sizeof(char) && to_loop; i++)
	{
		bt_wr = write(1, ch + i, sizeof(char));
		if (bt_wr <= 0 || bt_wr != sizeof(char))
			to_loop = 0;

		count++;
	}
	if (!to_loop)
	{
		free(ch);
		close(fd);
		return (0);
	}

	free(ch);
	return (count);
}
