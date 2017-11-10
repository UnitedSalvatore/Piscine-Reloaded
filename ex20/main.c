/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 20:55:34 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/24 21:03:34 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(int ac, char **av)
{
	char *str;

	if (ac == 2)
	{
		str = NULL;
		printf("Before: |%s|\n", str);
		str = ft_strdup(av[1]);
		printf("After:  |%s|\n", str);
	}
	return (0);
}
