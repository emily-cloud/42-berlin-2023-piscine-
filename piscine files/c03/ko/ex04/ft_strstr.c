/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:33:58 by hai               #+#    #+#             */
/*   Updated: 2023/10/15 20:43:43 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
/*int main() {
    char haystack[] = "The quick fox brown fo jumps over the lazy dog.";
    char needle[] = "fox";

    char *result = ft_strstr(haystack, needle);

    if (result != 0) {
        printf("'%s' found in the haystack.\n", needle);
    } else {
        printf("'%s' not found in the haystack.\n", needle);
    }

    return 0;
}*/
