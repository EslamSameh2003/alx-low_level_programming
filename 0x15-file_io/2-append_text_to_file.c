#include "main.h"

/**
 * append_text_to_file - a funcion that appends text at the end
 *                      of a file
 *
 * @filename: file to add data to
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f, status, w = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	
	f = open(filename, O_APPEND | O_WRONLY);

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
		app_status = write(f, text_content, w);

		if (status == -1) 
		{
			return (-1);
		}
	}

	close(f); 
	return (1);
}
