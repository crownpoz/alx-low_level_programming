#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, y;
	char *text;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	i = read(fd, text, letters);
	if (i < 0)
	{
		free(text);
		return (0);
	}
	text[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, text, i);
	if (y < 0)
	{
		free(text);
		return (0);
	}
	free(text);
	return (y);
}
