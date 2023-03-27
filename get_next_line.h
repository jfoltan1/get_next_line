#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char *ft_scanfile(int fd);
char *ft_put_next_line(char *str, int i);
char *get_next_line(int fd);
#endif