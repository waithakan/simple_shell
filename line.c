#include "main.h"
/**
 * read_line-read the input string.
 * @i_eof: return values of getline function
 * Return: input string
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	/*assigns the return value of getline()*/
	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
