/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:49:41 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/07 19:41:59 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

// int	main(void)
// {
// 	char	str[3];

// 	str[0] = 'a';
// 	str[1] = 'b';
// 	str[2] = 'c';
// 	ft_putstr(str);
// 	return (0);
// }