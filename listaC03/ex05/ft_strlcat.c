/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:50:38 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/13 17:49:41 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	total;

	total = 0;
	while (str[total] != '\0')
	{
		total++;
	}
	return (total);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	resultado;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	resultado = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size > dest_length)
	{
		resultado = src_length + dest_length;
	}
	else
	{
		resultado = src_length + size;
	}
	while (src[i] != '\0' && (dest_length + 1) < size)
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dest[dest_length] = '\0';
	return (resultado);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

// int	main()
// {
// 	// char			str0[50] = "Ola\0";
// 	char			str1[50]= "Ola\0";
// 	char			str2[] = "Concatenando 1";
// 	// unsigned int	tamanho1;
// 	unsigned int	tamanho2;

// 	// tamanho1 = ft_strlcat(str0, str2, 10);
// 	tamanho2 = strlcat(str1, str2, 10);
// 	// printf("String final: %s, Tamanho: %d", str0, tamanho1);
// 	printf("\nString final: %s, Tamanho: %d", str1, tamanho2);
// }

// para compilar com o strlcat original, coloque: cc ft_strlcat.c -lbsd

// A função strlcat () anexa a string src terminada em NUL ao final 
// de dst . Ele acrescentará no máximo tamanho - strlen(dst) - 1 bytes,
//  encerrando o resultado com NUL.

//  As funções strlcpy () e strlcat () retornam o comprimento 
//  total da string que tentaram criar.
//   Para strlcat () isso significa o comprimento inicial de dst 
//   mais o comprimento de src . Embora isso possa parecer um 
//   pouco confuso, foi feito para simplificar a detecção de 
//   truncamento.