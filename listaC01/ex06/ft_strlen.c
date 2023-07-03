/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:50:10 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/07 20:24:42 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

// #include <unistd.h>
// colocar o return (count + 48), para realizar a conversão
//  no write

// int	main(void)
// {
// 	char	str[3];
// 	int	b;

// 	str[0] = 'a';
// 	str[1] = 'b';
// 	str[2] = 'c';
// 	b = ft_strlen(str);
// 	write(1, &b, 1);
// 	return (0);
// }