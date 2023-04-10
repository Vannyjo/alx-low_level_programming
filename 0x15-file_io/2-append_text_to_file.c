#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int status = 0;
	struct stat st;

	if (filename == NULL)
		return (-1);

	if (stat(filename, &st) == 0)
	{
		fp = fopen(filename, "a");
		if (fp == NULL)
		{
			perror("Error opening file");
			return (-1);
		}
		if (text_content != NULL)
			status = fputs(text_content, fp);
		if (status < 0)
		{
			perror("Error writing to file");
			fclose(fp);
			return (-1);
		}
		fclose(fp);
		return (1);
	}
	return (-1);
}
