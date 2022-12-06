#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 *
 * Return: return 0 if:
 * 1. the file cannot be opened
 * 2. filename is NULL
 * 3. write fails or does not write the expected amount of bytes
 *
 * else, return the actual number of letter it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t countCh;
	char ch;
	FILE *pfile;

	if (!filename)
		return (0);

	pfile = fopen(filename, "r");
	if (!pfile)
		return (0);

	ch = fgetc(pfile);
	countCh = 0;
	while (!feof(pfile) && letters)
	{
		write(STDOUT_FILENO, &ch, 1);
		ch = fgetc(pfile);
		countCh++;
		letters--;
	}
	fclose(pfile);

	return (countCh);
}
