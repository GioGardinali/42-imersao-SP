/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:50:34 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/07 21:14:45 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	swap;

	index = 0;
	--size;
	while (index < size)
	{
		swap = tab[index];
		tab[index] = tab[size];
		tab[size] = swap;
		index++;
		size--;
	}
}

// #include <unistd.h>
	// index = 0;
	// while (index <= size)
	// {
	// 	write(1, &tab[index], 1);
	// 	index++;
	// }
// int	main(void)
// {
// 	int	tab[6];
// 	int size;

// 	size = 6;
// 	tab[0] = 48;
// 	tab[1] = 55;
// 	tab[2] = 52;
// 	tab[3] = 49;
// 	tab[4] = 57;
// 	tab[5] = 56;
// 	ft_rev_int_tab(tab, size);
// 	return (0);
// }