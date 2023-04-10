#include "main.h"
/**
  *create_file - creates a file
  *@filename: name of the file to be create
  *@text_content: NULL terminated string to write to file
  *
  *Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t bt_wr;

	if (!filename)
		return (-1);

	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (*(text_content + i) != '\0')
		{
			bt_wr = write(fd, (text_content + i), sizeof(char));
			if (bt_wr <= 0)
				return (-1);
			i++;
		}
	}

	close(fd);
	return (1);
}
