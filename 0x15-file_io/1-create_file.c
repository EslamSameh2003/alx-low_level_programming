#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success OR -1 on faliure
*/
int create_file(const char *filename, char *text_content)
{
	int f,status, w = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f == -1) 
	{
		return (-1);
	}
	if (text_content) 
	{
		while (text_content[w] != '\0')
		{
			w++;
		}
		
		status = write(f, text_content, w);

		if (status == -1)
		{
			return (-1);
		}

	}

	close(f); 
	return (1);
}
