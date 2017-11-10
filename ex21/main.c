/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 18:37:10 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/24 21:39:13 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main(int ac, char **av)
{
	int	i;
	int	*temp;

	if (ac == 3)
	{
		i = 0;
		temp = ft_range(atoi(av[1]), atoi(av[2]));
		if (temp)
			while (temp[i] != 0)
				printf("%i ", temp[i++]);
	}
	return (0);
}
