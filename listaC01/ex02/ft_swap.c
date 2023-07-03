/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:48:09 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/06 15:23:39 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	valor_a;

	valor_a = *a;
	*a = *b;
	*b = valor_a;
	write(1, a, 1);
	write(1, b, 1);
}

int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 44;
	ft_swap(&a, &b);
	return (0);
}