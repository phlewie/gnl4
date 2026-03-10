#include "get_next_line.h"
#include <fcntl.h> //open()
#include <stdio.h>

int main(void)
{
	int fd;
	char *line;
	
	fd = open("test11.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
