#include "ft_strlcpy.c"
#include <stdio.h>
#include <string.h>
#include "libft.h"



// int main(int argc, char **argv)
int main(void)
{
	// if (argc != 2) return (1);
	char dst[10] = "";
	size_t ans = ft_strlcpy(dst, "hello", 4);
	// size_t real_ans = strlcpy("", "hello", 5);
	printf("ans from my strlen: %zu\n", ans);
	// printf("ans from og strlen: %zu\n", real_ans);
	return (0);
}