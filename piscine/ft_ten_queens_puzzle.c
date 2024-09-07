/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:27:41 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 08:27:43 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 10

// Function to print the solution
void	print_solution(int solution[SIZE])
{
	int		i;
	char	c;

	i = 0;
	while (i < SIZE)
	{
		c = solution[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "$\n", 2);
}

// Function to check if a queen can be placed at (row, col)
int	is_valid(int board[SIZE], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row
			|| board[i] - i == row - col
			|| board[i] + i == row + col)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// Recursive function to solve the puzzle
void	solve(int board[SIZE], int col, int *count)
{
	int	row;

	if (col == SIZE)
	{
		print_solution(board);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < SIZE)
	{
		if (is_valid(board, row, col))
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
}

// Main function to start the puzzle solution
int	ft_ten_queens_puzzle(void)
{
	int	board[SIZE];
	int	count;

	count = 0;
	solve(board, 0, &count);
	return (count);
}
/*
// Main function for testing
int main(void)
{
    return ft_ten_queens_puzzle();
}
*/
