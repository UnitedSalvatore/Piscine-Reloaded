/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 20:52:25 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/24 21:06:03 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, const char *src)
{
	char *tmp;

	tmp = dst;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dst);
}

char	*ft_strdup(char *src)
{
	char *s2;

	s2 = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!s2)
		return (NULL);
	ft_strcpy(s2, src);
	return (s2);
}
