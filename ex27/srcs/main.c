/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:19:11 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/09/20 01:19:13 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> 

void	display_file(int fd);

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	display_file(fd);
	close(fd);
	return (0);
}
