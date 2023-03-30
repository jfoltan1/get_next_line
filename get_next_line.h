#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
size_t count(char *str);
char *ft_strcpy(char *str1, char *str2,int i);
char *get_next_line(int fd);
int find_nxt(char *str);
#endif