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
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		if (s[i + 1] == '\0' && s[i + 1] == (char)c)
			return (&((char *)s)[i + 1]);
		i++;
	}
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	return (NULL);
}
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}