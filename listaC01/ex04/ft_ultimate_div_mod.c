/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:49:13 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/07 14:03:52 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result_divi;
	int	result_modu;

	result_divi = *a / *b;
	result_modu = *a % *b;
	*a = result_divi;
	*b = result_modu;
}

// 	// deve-se colocar +48 ou +'0' no final do resultado 
// 	// do result_div e result_mod (result_div = *a / *b + 48;)
// 	, para o valor ser 
// 	// imprimível no write

// #include <unistd.h>
// 	write(1, a, 1);
// 	write(1, b, 1);

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	return (0);
// }