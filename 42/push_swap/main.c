/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeoli <gmeoli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:40:53 by gmeoli            #+#    #+#             */
/*   Updated: 2022/06/17 19:27:03 by gmeoli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_array(int *array, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_printf("%d\n", array[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	guido;

	if (ac >= 2)
	{
		if (ac > 2)
			ft_allocs_stack(&guido, ac, av);
		else
			ft_split_strnbr(&guido, av);
		ft_renumber_stack(&guido);
		ft_special_condition(&guido);
		ft_lis(&guido);
		ft_push_chunk(&guido);
		ft_algorithm(&guido);
		free(guido.stack_a);
		free(guido.stack_b);
		free(guido.lis);
	}
	else
		ft_error();
}
