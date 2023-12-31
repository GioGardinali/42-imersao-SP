/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:50:19 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/13 20:14:41 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (!(s1[i] == s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i != n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "inicio";
	char str2[] = "inIstudio";
	char str3[] = "abcd";

	printf("\nft_strncmp(str1, str2, n) = %d\n", ft_strncmp(str1, str2, 0));
	printf("strncmp(str1, str2, n) = %d\n", strncmp(str1, str3, 0));
	return (0);
}

// a função strncmp ela vai checar duas strings até encontrar a 
// diferença entre elas se foram iguais, será 0, agora se tiver 
// algo diferente, ela irá trazer a difenreça de endereço do caracter
//  que ela encontrou de diferente, então se a diferença 
//  de c e C, vai ser 32, e isso que tem que sair isso no terminal.