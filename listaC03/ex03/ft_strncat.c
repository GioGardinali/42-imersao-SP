/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:50:30 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/12 13:49:08 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' & j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* #include <unistd.h>
#include <stdio.h>
#include <string.h>
void test_strncat(char *dest, char *src, unsigned int nb)
{
	char a[100];
	char b[100];
	strcpy(a, dest);
	strcpy(b, src);
	printf("ft_strncat(str1, str2, nb) = %s\n", ft_strncat(dest, src, nb));
	printf("strncat(str1, str2, nb) = %s\n", strncat(a, b, nb));
}
int main(void) {
	char dest[] = "abc";
	char src[] = "xyzwrt";
	test_strncat(dest, src, 3);
	return 0;
} */