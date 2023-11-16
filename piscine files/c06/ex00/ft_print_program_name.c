/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:09:44 by hai               #+#    #+#             */
/*   Updated: 2023/10/17 12:30:30 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	argc = 0;
	j = 0;
	while (argv[argc][j] != '\0')
	{
		write(1, &argv[argc][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}