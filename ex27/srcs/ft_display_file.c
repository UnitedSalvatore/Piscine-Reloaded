/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:25:21 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/24 23:35:38 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd != -1)
	{
		while ((ret = read(fd, buf, BUF_SIZE)) > 0)
			write(1, buf, ret);
		close(fd);
	}
}
