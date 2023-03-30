#include "get_next_line.h"

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i]!='\0')
	{
		write(1, &str[i],1);
		i++;
	}
}
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
char *ft_scanfile(int fd)
{
	char *buffer;

	buffer = ft_calloc(sizeof(char),(BUFFER_SIZE + 1));
	if (BUFFER_SIZE < 0)
		{
		free(buffer);
		return(NULL);
		}
	read(fd, buffer, BUFFER_SIZE);
	buffer[BUFFER_SIZE] = '\0';
	return(buffer);
}
char *ft_put_next_line(char *str, int i)
{   
	int a;
	int b;
	int c;
	int d; 
	char *line;

	c  = 0;
	d = 0;
	a = i;
	b  = 0;

	while (str[i] != '\n' && i <= BUFFER_SIZE)	
	{	
		i++;
		a++;
		b++;
	}
	line = ft_calloc(sizeof(char), a + 3);
	d = i - b;
	while(b > 0)
	{
		line[c] = str[d];
		b--;
		d++;
		c++;
	}
	line[c] = '\n';
	line[c + 1] = '\0';
    return(line);
}