/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:40:57 by hai               #+#    #+#             */
/*   Updated: 2023/10/17 09:23:51 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	if (nb == 1)
		return (1);
	if (nb > 1)
	{
		while (number * number < nb && number <= 46340)
		{
			number++;
			if (number * number == nb)
				return (number);
		}
	}
	return (0);
}
/*int	main()
{
	int	nb;
	
	nb = 49;
	printf("%d", ft_sqrt(nb));
}*/
