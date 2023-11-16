/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:45:24 by hai               #+#    #+#             */
/*   Updated: 2023/10/15 20:47:49 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < nb)
	{
		i++;
	}
	while (src[j] != '\0' && i < nb - i)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main() {
	char dest[50] = "Hello,";
	char src[] = "world!";

	ft_strlcat(dest, src, 2);
	printf("Concatenated string: %s\n", dest);
	return 0;
}*/
