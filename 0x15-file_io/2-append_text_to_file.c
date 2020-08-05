#include "holberton.h"

/**
  *_strlen - Find length of file
  *@str: string to check
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
  *append_text_to_file - Appends text at the end of a file
  *@filename: Name of file
  *@text_content: File content
  *Return: 1 if success (append text) or -1 if fail
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_char;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write_char = write(fd, text_content, _strlen(text_content));
	if (write_char == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
