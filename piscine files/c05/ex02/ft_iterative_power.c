/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:08:40 by hai               #+#    #+#             */
/*   Updated: 2023/10/16 14:42:47 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	number;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	number = nb;
	while (power > 1)
	{
		number = number * nb;
		power--;
	}
	return (number);
}
/*int	main(void)
{
	int	nb;
	int	power;

	nb = -5;
	power = 2;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/
