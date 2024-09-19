/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:40:06 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/09/12 21:40:08 by sarosa-b         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_print_args(int argc, char **argv)
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

int	main(int argc, char **argv)
{
	int		i;
	int		sorted;

	i = 1;
	sorted = 1;
	while (sorted && argc > 2)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				i = 0;
			}
			else
			{
				i++;
				sorted = 0;
			}
		}
	}
	ft_print_args(argc, argv);
}
