#include "get_next_line.h"

char *get_next_line(int fd)
{
	static int i;
	char *output;
	char *line;

	output = ft_scanfile(fd);
	line = ft_put_next_line(output,i);
	/*ft_putstr(line);*/
	return(line);
}