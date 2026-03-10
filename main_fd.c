#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"
int main(void)
{
	char *line;
	
	line = get_next_line(-1);
	if (line == NULL)
		printf("NULL 반환 (정상)\n");
	else
	{
		printf("비정상: %s\n", line);
		free(line);
	}
	return (0);
}
