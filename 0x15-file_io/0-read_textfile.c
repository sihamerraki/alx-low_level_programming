#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
        return 0;
    char buf[letters + 1];
    ssize_t nread = fread(buf, sizeof(char), letters, fp);
    buf[nread] = '\0';
    ssize_t nwritten = write(STDOUT_FILENO, buf, nread);
    if (nwritten != nread)
        return 0;
    fclose(fp);
}
