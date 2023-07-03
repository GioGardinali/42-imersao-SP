/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:50:25 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/12 11:43:34 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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

void test_strcat(char *dest, char *src)
{
	char a[100];
	char b[100];
	strcpy(a, dest);
	strcpy(b, src);
	printf("\nfunção ft_strcat(str1, str2) = %s\n", ft_strcat(dest, src));
	printf("função strcat(str1, str2) = %s\n", strcat(a, b));
}
int main(void) {
	char dest[] = "abc";
	char src[] = "def";
	test_strcat(dest, src);
	return 0;
} */