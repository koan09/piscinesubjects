/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laboikon <laboikon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:20:33 by laboikon          #+#    #+#             */
/*   Updated: 2022/07/27 16:05:39 by laboikon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *c, int *l)
{
	int	swappie;

	swappie = *c;
	*c = *l;
	*l = swappie;
}

// int	main(void)
// {
// 	int	camilla;
// 	int	laura;

// 	camilla = 30;
// 	laura = 25;
// 	printf("before swapping: camilla is : %d, laura is: %d\n ", camilla, laura);
// 	ft_swap(&camilla, &laura);
// 	printf("after swapping: camilla is: %d, laura is :%d\n ", camilla, laura);
// 	return (0);
// }
