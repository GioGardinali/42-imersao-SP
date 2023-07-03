/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:38:19 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/14 17:07:34 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count;
	int	signal;
	int	res;

	count = 0;
	signal = 1;
	res = 0;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			signal *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = (str[count] - '0') + (res * 10);
		count++;
	}
	return (res * signal);
}

/* #include <stdio.h>

int	main (void)
{
	char	*s = "   --+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}
 */