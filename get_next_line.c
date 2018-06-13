/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:42:08 by fkhan             #+#    #+#             */
/*   Updated: 2018/06/13 08:05:47 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char		*ft_holder(const int fd, int *i)
{
	static char *hold;
	char		tmp[BUFF_SIZE + 1];
	char		*ret;

	if (hold == 0)
		hold = ft_strnew(0);
	*i = read(fd, tmp, BUFF_SIZE);
	tmp[*i] = '\0';
	hold = ft_strdup(tmp);
	if ((hold = ft_strchr(hold, '\n')) == 0)
	{
		hold = ft_strjoin(hold, tmp);
		printf("top :: %s", hold);
	}
	hold = ft_strdup(hold + 1);
	ret = ft_strsub(tmp, 0, strlen(tmp) - ft_strlen(hold));
	return (ret);
}

int			get_next_line(const int fd, char **line)
{
	char		*tmp;
	char		*place;
	int			i;

	if (!(fd))
		return (-1);
	printf("%d \n", BUFF_SIZE);
	i = 1;
	printf("get2\n");
	while (i > 0)
	{
		if ((place = ft_strchr(tmp, '\n')) != 0)
		{
			ft_memmove(*line, tmp, ft_strlen(tmp) - 1);
			return (1);
		}
		printf("loop\n");
		tmp = ft_holder(fd, &i);
	}
	printf("end0");
	return (0);
}
