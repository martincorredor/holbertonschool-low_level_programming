#include "holberton.h"

/**
  *read_textfile - reads a text file and prints it to the POSIX standard output
  *@filename: - file to read
  *@letters: characters
  *Return: actual number of letters it could read and print, 0 if fail
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[letters];
	ssize_t read_char, write_char;

	if(filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if(fd == -1)
		return (0);

	read_char = read(fd, buff, letters);
	if(read_char == -1)
	{
		close(fd);
		return (0);
	}

	write_char = write(STDOUT_FILENO, buff, read_char);
	if(write_char == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (read_char);
}

