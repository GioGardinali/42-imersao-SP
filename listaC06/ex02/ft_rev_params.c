/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:55:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/15 10:06:07 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = argc - 1;
	d = 0;
	if (argc > 1)
	{
		while (c > 0)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write(1, &argv[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}

// se eu passo 3 argumentos, ao total eu tenho 4: ./a.out teste1 teste2 teste3
// o valor de count tem que ser -1, para não imprimir o 0(./a.out)
// while(c > 0), vai valer c > 0, argc -1 > 0, 4 -1 >0, 3 >0.
// coloco o loop tradicional
// decremento o count, para ele ler de trás pra frente, então 
// primeiro vai ser 3, depois 2 e assim por diante até chegar no 1