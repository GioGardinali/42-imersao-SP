/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:34:11 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/14 21:49:37 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

/* #include   <stdio.h>
void	ft_putnbr(int n);
int		main(void)
{
	char teste[]= "testando";
	printf("imprime o que queremos: ");
	ft_putstr(teste);
	return (0);
} */