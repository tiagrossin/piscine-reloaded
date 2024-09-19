/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:05:38 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/09/12 17:05:41 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*arg;

	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		ft_putstr(arg);
		ft_putchar('\n');
		i++;
	}
}
