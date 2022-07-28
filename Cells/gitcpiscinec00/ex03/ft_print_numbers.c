/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laboikon <laboikon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:49:28 by laboikon          #+#    #+#             */
/*   Updated: 2022/07/21 19:13:10 by laboikon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	getal;

	getal = 48;
	while (getal <= 57)
	{
		write(1, &getal, 1);
		getal++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
