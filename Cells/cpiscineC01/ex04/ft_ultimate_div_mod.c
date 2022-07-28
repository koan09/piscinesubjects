/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laboikon <laboikon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:56:59 by laboikon          #+#    #+#             */
/*   Updated: 2022/07/27 16:06:48 by laboikon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

// int	main(void)
// {	
// 	int	a;
// 	int	b;

// 	a = 25;
// 	b = 4;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a = %d\n", a);
// 	printf("b = %d", b);
// 	return (0);
// }
