#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*se;

	i = 0;
	se = (unsigned char *)s;
	while (i < n)
	{
		se[i] = 0;
		i++;
	}
	s = se;
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	if (nmemb == 0 && size == 0)
		return (ptr = 0);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
size_t count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char *ft_strcpy(char *buff, char *line,int i)
{
	int	a;

	a = 0;
	while (buff[a] != '\n')
	{
		line[a] = buff[a];
		a++;
	}
	line[a] = '\0';
	return (line);
}
int find_nxt(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		return(1);
		i++;
	}
	return(0);	
}