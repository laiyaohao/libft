
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>
#include <limits.h>
#include "ft_strlen.c"

// int main(int argc, char **argv)
int main(void)
{
	// if (argc != 2) return (1);
	// char dst[2] = "ab";
	// int	i = 0;
	// size_t ans = ft_strlcpy(dst, "", 4);
	size_t ans = ft_strlen("fafds");
	// size_t real_ans = strlcpy("", "hello", 5);
	printf("ans from my ft_strlcpy: %zu\n", ans);
	// printf("ans from og strlen: %zu\n", real_ans);
	// while (i < 2)
	// {
	// 	printf("char in dst: %c\n", dst[i]);
	// 	i++;
	// }
	return (0);
}