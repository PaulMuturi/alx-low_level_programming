#include "main.h"
/**
  *append_text_to_file - appends text at the end of the file
  *@filename: name of the file
  *@text_content: NULL terminated string to add at the end of the file.
  *
  *Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t bt_wr;

	if (!filename)
		return (-1);

	if (access(filename, F_OK) != 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		for (i = 0; *(text_content + i) != '\0'; i++)
		{
			bt_wr = write(fd, text_content + i, sizeof(char));
			if (bt_wr < 0)
				return (-1);
		}
	}

	close(fd);
	return (1);
}
