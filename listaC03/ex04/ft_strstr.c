/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:50:34 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/13 17:49:15 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}

/* #include <unistd.h>
#include <stdio.h>
#include <string.h>
void test_strstr(char *str, char *to_find)
{
	printf("ft_strstr(Palheiro, agulha) = %s\n", ft_strstr(str, to_find));
	printf("strstr(Palheiro, agulha) = %s\n", strstr(str, to_find));
}
int main(void) {
	test_strstr("TutorialsPoint", "ls");

	return(0);
} */