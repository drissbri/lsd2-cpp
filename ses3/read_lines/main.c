#include "functions.h"

int	main(int argc, char *argv[])
{
	int		fd;
	char	*line;

	fd = open(argv[1], O_RDONLY);
	
	while (1)
	{
		line = readlines(fd);
		if (line == NULL)
			break ;
		printf("%s",line);
		free(line);
	}
	return (0);
}