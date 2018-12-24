#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
		ft_putchar(str[idx++]);
}

void	ft_print_sudoku_line(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx++]);
		ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	error_msg(void)
{
	ft_putstr("Error\n");
}
