/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:54:17 by hai               #+#    #+#             */
/*   Updated: 2023/10/17 08:52:00 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	long int	number;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	number = nb;
	while (nb > 1)
	{
		number = number * (nb - 1);
		nb--;
	}
	return (number);
}
/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}*/
