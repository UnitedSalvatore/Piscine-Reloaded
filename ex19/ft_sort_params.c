/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:47:35 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/24 20:50:15 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char **a, char **b)
{
	char	*temp;

	if (!a || !b || !*a || !*b)
		return ;
	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 == *s2++)
		if (*s1++ == '\0')
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)--s2);
}

void	ft_putstr(char *str)
{
	if (str)
		while (*str)
			ft_putchar(*str++);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], &av[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
