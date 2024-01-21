/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:23:47 by nfigueir          #+#    #+#             */
/*   Updated: 2024/01/21 13:36:10 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int	ft_write_vert(int l, int c, int x, int y);

void	rush(int x, int y)
{
	int line;
	int column;
	int is_vert;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((line == 1) || (line == y))
			{
				is_vert = ft_write_vert(line, column, x, y);
				if (is_vert == 0)
					ft_putchar('*');
			}
			if ((line != 1) && (line != y))
			{
				if ((column != 1) && (column != x))	
					ft_putchar(' ');
				if ((column == 1) || (column == x))
					ft_putchar('*');
			}
			column++;
		}
		ft_putchar('\n');
		line++;
	}
	ft_putchar('\n');
}

int	ft_write_vert(int l, int c, int x, int y)
{
	if ((l == 1) && (c == 1))
	{
		ft_putchar('/');
		return (1);
	}
	if ((l == 1) && (c == x))
	{
		ft_putchar('\\');
		return (1);
	}
	if ((l == y) && (c == 1))
	{
		ft_putchar('\\');
		return (1);
	}
	if ((l == y) && (c == x))
	{
		ft_putchar('/');
		return (1);
	}
	return (0);
}
