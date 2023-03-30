#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char *buff;
	char *line;
	int i;

	if (fd < 0 || BUFFER_SIZE < 0)
	return (NULL);
	i = 0;
	buff = ft_calloc(BUFFER_SIZE + 1,sizeof(char));
	i = read(fd,buff,BUFFER_SIZE);
	if (i <= 0)
	{
		free(buff);
		return(NULL);
	}
	if (strchr(buff))
	

	//i = count(buff);
	//line = ft_calloc(i + 2, sizeof(char));
	//line = ft_strcpy(buff, line, i);
	return (line);
}