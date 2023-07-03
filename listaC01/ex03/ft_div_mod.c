/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:48:28 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/07 12:27:57 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b + 48;
	*mod = a % b + 48;
}

// #include <unistd.h>
// 	write(1, div, 1);
// 	write(1, mod, 1);
	// deve-se colocar +48 ou +'0' no final do resultado 
	// do div e mod (div = a/b +48), para o valor ser 
	// imprimível no write
// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 10;
// 	b = 2;
// 	ft_div_mod(a, b, &div, &mod);
// 	return (0);
// }