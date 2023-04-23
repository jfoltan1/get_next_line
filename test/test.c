#include "test.h"

int	ft_strlen(char *c)
{	
	int	i;
	i = 0;
	while (c[i] != '\0')
		i++;
	return(i);
}

int	ft_strcpy(char *src,char *dest)
{
	int	i;

	i = 0;
	dest = ft_calloc(ft_strlen(src),sizeof(char));
	while (src[i])
	{	
		dest[i] = src[i];
		i++;
	}
	write(1, "a", 1);
	return(i);
}

char *return_node()
{
	static t_list *buffer;
	char *line;

	line = "PLEASE WORK FOR THE LOVE OF GOD.";
	if (!buffer)
		buffer = ft_calloc(ft_strlen(line),sizeof(char));
	ft_strcpy(line,buffer -> content);
	buffer -> next = NULL;
	//free(line);
	return((char*)(buffer->content));
}
int main(void)
{
	printf("%s",return_node());
}