#include "main.h"

 /**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * file: the file to read
 * letters: number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
 */
 ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t read_check, wcount;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}

	f = open(filename, O_RDONLY); 

	if (f == -1)
	{
		return (0);
	}

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		free(b);
		return (0);
	}

	read_check = read(f, b, letters); 
	if (read_check == -1) 
		return (0);

	wcount = write(STDOUT_FILENO, buffer, read_check); 
	if (wcount == -1 || read_check != wcount) 
		return (0);

	free(b);

	close(f); 

	return (wcount);
}
