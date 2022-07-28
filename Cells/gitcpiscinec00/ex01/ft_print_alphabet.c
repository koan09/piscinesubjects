/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laboikon <laboikon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:04:55 by laboikon          #+#    #+#             */
/*   Updated: 2022/07/14 21:15:50 by laboikon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		write(1, &alpha, 1);
		alpha++;
	}
}

// int main(void)

// {
//     ft_print_alphabet();
//     return(0);
// }