/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:31:17 by hai               #+#    #+#             */
/*   Updated: 2023/10/14 15:25:06 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		{
			i++;
		}
		else 
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/*int main()
{
    char s1[] = "acc";
    char s2[] = "accc";
    int result;
   
    result = ft_strncmp(s1, s2, 4);
   
    if (result ==0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");}
    return (0);
}*/
