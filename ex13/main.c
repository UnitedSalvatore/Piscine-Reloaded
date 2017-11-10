/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:47:18 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/23 18:52:00 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb);

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Result: |%i|", ft_recursive_factorial(atoi(av[1])));
	}
	return (0);
}
