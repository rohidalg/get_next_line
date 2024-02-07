#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*manolo;

	fd = open("ejemplo.txt", O_RDONLY);
	manolo = get_next_line(fd);
	printf("%s", manolo);
	manolo = get_next_line(fd);
	printf("%s", manolo);
	// manolo = get_next_line(fd);
	// printf("%s", manolo);
	// manolo = get_next_line(fd);
	// printf("%s", manolo);
	manolo = get_next_line(fd);
	printf("%s", manolo);
	manolo = get_next_line(fd);
	printf("%s", manolo);
	manolo = get_next_line(fd);
	printf("%s", manolo);
	manolo = get_next_line(fd);
	printf("%s", manolo);
	manolo = get_next_line(fd);
	printf("%s", manolo);
	system("leaks -q a.out");
	close(fd);
	return (0);
}
