/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:54:45 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/15 10:08:00 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	if (argc > 0)
	{
		while (argv[0][count] != '\0')
		{
			write(1, &argv[0][count], 1);
			count++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

// argc = Contador de argumentos
// argv = argumento char array | Array de ponteiros 
// para os argumentos dados no terminal | usar matrizes como argumentos
// argv[0][4] do arquivo ./a.out vai ser o char = o.
// o primeiro array é para andar qual argumento e o segundo vai 
// entrar no argumento e passar por ele
// tipo o primeiro é a linha e o segundo é a coluna.
// argc > 0 = quer dizer que vai começar a ler desde 
// o primeiro argumento