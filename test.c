#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char *buff;
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
	buff [i] = '\0';
	i = 0;
	while (buff[i] != '\n')
	i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buff[i] != '\n')
	{
		line[i] = buff[i];
		i++;
	}
	line[i] = '\n';
	line [i + 1] = '\0';
	free(buff);
	return (line);
}
