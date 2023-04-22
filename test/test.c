#include "test.h"
int	ft_strlen(char *c)
{	
	int	i;
	i = 0;
	while (c[i] != '\0')
		i++;
	return(i);
}

char *return_node()
{
	static t_list *buffer;
	char *line;

	line = "PLEASE WORK FOR THE LOVE OF GOD.";
	if (!buffer)
		buffer = calloc(ft_strlen(line),sizeof(char));
	buffer -> content = line;
	buffer -> next = NULL;
	return((char*)(buffer->content));
}
int main(void)
{
	printf("%s",return_node());
}