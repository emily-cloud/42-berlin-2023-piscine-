/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:49:15 by hai               #+#    #+#             */
/*   Updated: 2023/10/08 16:19:41 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
    char	src[] = "hello";
    char	dest[10];
    int	i = 0;

    ft_strcpy(dest, src);

    while (dest[i] != '\0') {
        write(1, &dest[i], 1);
        i++;
    }

    return 0;
}*/
