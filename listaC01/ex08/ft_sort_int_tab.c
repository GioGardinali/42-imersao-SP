/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:36:09 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/07 21:15:02 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	second_index;
	int	swap;

	index = size -1;
	while (index)
	{
		second_index = 0;
		while (second_index < index)
		{
			if (tab[second_index] > tab[second_index + 1])
			{
				swap = tab[second_index];
				tab[second_index] = tab[second_index +1];
				tab[second_index + 1] = swap;
			}
			second_index++;
		}
		index--;
	}
}

// #include <unistd.h>
// 	index = 0;
// 	while (index <= size)
// 	{
// 		write(1, &tab[index], 1);
// 		index++;
// 	}
// int	main(void)
// {
// 	int	tab[6];
// 	int size;

// 	size = 6;
// 	tab[0] = 49;
// 	tab[1] = 50;
// 	tab[2] = 55;
// 	tab[3] = 56;
// 	tab[4] = 54;
// 	tab[5] = 51;
// 	ft_sort_int_tab(tab, size);
// 	return (0);
// }