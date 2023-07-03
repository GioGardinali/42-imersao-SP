/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:55:04 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/15 10:07:57 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;
	int	count_col;

	count = 1;
	count_col = 0;
	if (argc > 1)
	{
		while (count < argc)
		{
			count_col = 0;
			while (argv[count][count_col] != '\0')
			{
				write(1, &argv[count][count_col], 1);
				count_col++;
			}
			write(1, "\n", 1);
			count++;
		}
	}
	return (0);
}

// aqui eu passo que o contador de argumentos (argc > 1) tem 
//que ser maior que 1, ou seja, não pode ser o 0 de ser o primeiro.
// o while(c < argc) para rodar tudo do contador sem contar o 0.