/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:33:48 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/14 21:15:29 by gigardin         ###   ########.fr       */
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

/* #include   <stdio.h>
void	ft_putnbr(int n);
int		main(void)
{
	char teste[]= "testando";
	printf("imprime a contagem da string que queremos: ");
	printf("%d", ft_strlen(teste));
	return (0);
} */