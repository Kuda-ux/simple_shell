#include <stdio.h>
#include <unistd.h>
#include "shell.h"

/**
 * _getline - reads a whole line of text from a FILE *stream
 *
 * @stream: FILE *stream
 *
 * return - returns number of bytes read excluding the null byte but including the delimeter
 */

int _getline(FILE *stream)
{
	int success, i, failure = -1;
	char *str;

	if (stream != NULL)
	{
		if (fgetc(stream) == failure)
			return (failure);
		else
			for (i = 0; str[i] != '\n'; i++)
			{
				str[i] = (char)fgetc(stream);
				success++;
			}
	}
	else
		return (failure);

	return (success);
}
