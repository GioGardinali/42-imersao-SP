/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:50:13 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/13 19:58:36 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "abcd", str2[] = "abcdE";

	printf("\nft_strcmp(str1, str2) = %d\n", ft_strcmp(str1, str2));
	printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
	return (0);
}

// a função strcmp ela vai checar duas strings até encontrar a 
// diferença entre elas se foram iguais, será 0, agora se tiver 
// algo diferente, ela irá trazer a difenreça de endereço do caracter
//  que ela encontrou de diferente, então se a diferença 
//  de c e C, vai ser 32, e isso que tem que sair isso no terminal.