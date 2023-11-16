/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:14:28 by hai               #+#    #+#             */
/*   Updated: 2023/10/16 09:30:04 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
	return (0);
}
/*int	main(void)
{
	int	nb;
	int	power;

	nb = 6;
	power = 3;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}*/
