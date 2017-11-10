/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 21:20:35 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/24 21:31:35 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *buffer;

	i = 0;
	if (min >= max)
		return (NULL);
	buffer = malloc(sizeof(int) * (max - min + 1));
	if (!buffer)
		return (NULL);
	while (min < max)
		buffer[i++] = min++;
	buffer[i] = 0;
	return (buffer);
}
