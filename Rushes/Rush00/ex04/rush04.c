/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:04:38 by yaabdian          #+#    #+#             */
/*   Updated: 2024/07/14 13:07:04 by yaabdian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int len, char begin_char, char midel_char, char end_char)
{
	int	letter_counter;

	letter_counter = 1;
	while (letter_counter <= len)
	{
		if (letter_counter == 1)
			ft_putchar(begin_char);
		else if (letter_counter == len)
			ft_putchar(end_char);
		else
			ft_putchar(midel_char);
		letter_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_counter;

	line_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_counter <= y)
		{
			if (line_counter == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (line_counter == y)
				ft_print(x, 'C', 'B', 'A');
			else
				ft_print(x, 'B', ' ', 'B');
			line_counter++;
		}
	}
}
