/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeoli <gmeoli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:40:44 by gmeoli            #+#    #+#             */
/*   Updated: 2022/05/29 16:41:02 by gmeoli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_matrix(int len, int **matrix)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
