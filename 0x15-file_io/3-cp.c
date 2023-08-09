#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to;
int number1 = 1024, number2 = 0;
char buffer[1024];
0
if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_from), exit(99);
}
while (number1 == 1024)
{
	number1 = read(fd_from, buf, 1024);
	if (number1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	number2 = write(file_to, buf, number1);
	if (number2 < number1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(fd_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

if (close(fd_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

return (0);
}
