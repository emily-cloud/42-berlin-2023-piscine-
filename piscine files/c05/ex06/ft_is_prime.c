/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:46:09 by hai               #+#    #+#             */
/*   Updated: 2023/10/19 10:13:36 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	number;

	if (nb <= 1)
		return (0);
	number = 2;
	while (number * number <= nb && number <= 46340)
	{
		if (nb % number == 0)
			return (0);
		number++;
	}
	return (1);
}
/*int	main(void)
  {
	int	nb;

	nb = 4;
	printf("%d", ft_is_prime(nb));
}*/
