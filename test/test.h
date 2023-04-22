#ifndef TEST_H
# define TEST_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}				t_list;

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
#endif