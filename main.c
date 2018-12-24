#include "ft_print_utils.h"
#include "ft_sudoku_board.h"
#include "ft_sudoku_backtracking.h"

int		input_is_invalid(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 10)
		return (1);
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		if (j != 9)
			return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		answer;
	t_board *board;

	if (input_is_invalid(argc, argv))
	{
		error_msg();
		return (1);
	}
	else
	{
		argv++;
		board = create_board(argv);
		answer = backtrack(board);
		if (answer)
		{
			print_board(board);
			return (0);
		}
		else
		{
			error_msg();
			return (1);
		}
	}
}
