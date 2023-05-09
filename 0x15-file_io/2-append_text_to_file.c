#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: filename.
 * @text_content: text_content.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, astatus, word = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);

	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[word] != '\0')
			word++;

		astatus = write(file, text_content, word);
		if (astatus == -1)
			return (-1);
	}
	close(file);
	return (1);
}
