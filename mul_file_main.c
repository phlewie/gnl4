#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int fd1;
	int fd2;
	char *line1;
	char *line2;

	fd1 = open("test13a.txt", O_RDONLY);
	fd2 = open("test13b.txt", O_RDONLY);
	line1 = get_next_line(fd1);
	line2 = get_next_line(fd2);
	while (line1 != NULL || line2 != NULL)
	{
		if (line1) {printf("fd1: %s", line1); free(line1);}
		if (line2) {printf("fd2: %s", line2); free(line2);}
		line1 = get_next_line(fd1);
		line2 = get_next_line(fd2);
	}
	close(fd1);
	close(fd2);
	return (0);
}
