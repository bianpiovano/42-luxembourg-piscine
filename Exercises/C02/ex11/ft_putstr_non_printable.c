/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:48:53 by bpiovano          #+#    #+#             */
/*   Updated: 2024/07/22 14:49:00 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_char_printable(char c)
{
	return (c >= 32 && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (true)
	{
		c = str[i];
		if (c == '\0')
		{
			break ;
		}
		if (is_char_printable(c))
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[i / 16]);
			ft_putchar("0123456789abcdef"[i % 16]);
		}
		i++;
	}
}

/*int main(int argc, char** argv)
{
    printf("Testing string: %s\n", argv[1]);
    ft_putstr_non_printable(argv[1]);
}*/