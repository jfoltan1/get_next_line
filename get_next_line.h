#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char *ft_nextline (char *buff);
char *ft_get_line (char *buff);
char *ft_freemebaby(char *result, char *buff);
char	*ft_read_file(int fd, char *result);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char *get_next_line(int fd);

#endif