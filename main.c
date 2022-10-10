#include <stdio.h>
#include "libs/ft_printf.h"

int	main(void)
{
	int	i;
	int	j;

	i = printf("%p", 0);
	j = ft_printf("%p", 0);
	printf("\n%d %d\n", i, j);
}