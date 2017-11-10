/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:41:20 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/23 18:51:35 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
