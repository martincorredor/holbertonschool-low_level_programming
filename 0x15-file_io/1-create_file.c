#include "holberton.h"

/**
  *_strlen - finds length of string
  *@str : string o check
  *Return: length of string
  */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
  *create_file - Creates a file
  *@filename: name of file
  *@text_content: file content
  *Return: 1 on success (create a file) or -1 if fail
  */

int create_file(const char *filename, char *text_content)
{
	int fd, write_char;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write_char = write(fd, text_content, _strlen(text_content));
	if (write_char == -1 || write_char != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);

}
