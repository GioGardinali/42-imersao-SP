/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:34:15 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/11 19:31:40 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

// #include <stdio.h>

// char	*ft_strncpy(char *dest, char *src, unsigned int n);
// int		main(void)
// {
// 	char src[] = "arq";
// 	char dest[] = "Destino";
// 	unsigned int n;
// 	n = 4;
// 	printf("Antes\n\tsrc: %s\n\tdes: %s\n", src, dest);
//     ft_strncpy(dest, src, n);
// 	printf("Depois\n\tsrc: %s\n\tdes: %s\n", src, dest);
// 	return (0);
// }