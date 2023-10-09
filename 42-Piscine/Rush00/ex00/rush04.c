/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sedere <Sedere@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:36:37 by Sedere            #+#    #+#             */
/*   Updated: 2023/02/05 17:41:14 by Sedere           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y && x > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && row == 1)
				|| (col == x && row == y && col != 1 && row != 1))
				ft_putchar('A');
			else if ((col == x && row == 1) || (col == 1 && row == y))
				ft_putchar('C');
			else if ((col == 1) || (col == x) || (row == 1) || (row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
