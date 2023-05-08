#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: name file.
 * @text_content: file content.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, wstatus, word = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);
	
	if (text_content)
	{
		while (text_content[word] != '\0')
			word++;

		wstatus = write(file, text_content, word);

		if (wstatus == -1)
			return (-1);
	}

	close(file);
	return (1);
}
