/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:53:55 by hai               #+#    #+#             */
/*   Updated: 2023/10/17 10:41:04 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	number;

	number = 2;
	if (nb <= 1)
		return (0);
	while (number * number <= nb && number <= 46340)
	{
		if (nb % number == 0)
			return (0);
		number++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;

	nb = 8;
	printf("%d", ft_find_next_prime(nb));
}*/
