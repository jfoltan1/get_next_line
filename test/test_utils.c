#include "test.h"

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