#include "get_next_line.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	a;
	char	*ptr;

	i = 0;
	a = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[a])
	{
		ptr[i] = s2[a];
		a++;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
char *ft_nextline (char *buff)
{
	char *next;
	int	a;
	int	i;

	i = 0;
	a = 0;
	while (buff[i] && buff[i]!= '\n')
	i++;
	if (!buff[i])
	{
		free (buff);
		return(NULL);
	}
	next = ft_calloc(((ft_strlen(buff)) - i + 1), sizeof(char));
	i++;
	while (buff[i])
	{
		next[a] = buff[i];
		i++;
		a++;
	}
	free (buff);
	return (next);
}

char *ft_get_line (char *buff)
{
	char *line;
	int	i;

	i = 0;
	if (!buff[i])
		return (NULL);
	while (buff[i] && buff[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buff[i] && buff[i] != '\n')
	{
		line[i] = buff[i];
		i++;
	}
		if (buff[i] && buff[i] == '\n')
		line[i++] = '\n'; //toto este pozriet
	return(line);
}
char *ft_freemebaby(char *result, char *buff)
{
	char *temp;

	temp =  ft_strjoin(result,buff);
	free (buff);
	return (temp);
}
char	*ft_read_file(int fd, char *result)
{
	int	bytes_read;
	char *buff;

	bytes_read = 1;
	if (!result)
		result = ft_calloc(1, 1);
	buff = ft_calloc(BUFFER_SIZE + 1 , sizeof(char));
	while (bytes_read > 0)
	{
		bytes_read = read(fd,buff,BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free (buff);
			return (NULL);
		}
		buff[bytes_read] = 0;	
		result  = ft_freemebaby(result,buff);
		if (ft_strchr(buff,'\n'))
			break;
	}
	free (buff);
	return(result);
}

char	*get_next_line(int fd)
{
	static char *buff;
	char *line;


	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buff = ft_read_file(fd, buff);
	if (!buff)
		return (NULL);
	line = ft_get_line(buff);
	buff = ft_nextline(buff);
	return (line);
}