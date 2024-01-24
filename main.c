#include "get_next_line.h"
#include <fcntl.h>

int main()
{
	int fd;
	 
	fd = open("ejemplo.txt", O_RDONLY);

	char *manolo;
	manolo = get_next_line(fd);
	printf("%s", manolo);
	// manolo = get_next_line(fd);
	// printf("%s", manolo);
	// manolo = get_next_line(fd);
	// printf("%s", manolo);
	// manolo = get_next_line(fd);
	// printf("%s", manolo);
	// manolo = get_next_line(fd);
	printf("%s", manolo);
	system("leaks -q a.out");
	close(fd);
	return 0;
}