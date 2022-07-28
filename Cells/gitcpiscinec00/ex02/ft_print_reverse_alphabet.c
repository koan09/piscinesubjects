/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laboikon <laboikon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:30:34 by laboikon          #+#    #+#             */
/*   Updated: 2022/07/21 19:09:00 by laboikon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	r;

	r = 122;
	while (r >= 97)
	{
		write(1, &r, 1);
		r--;
	}
}

// int	main(void)

// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
