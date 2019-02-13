/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcpyexcept.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelykh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:12:30 by apelykh           #+#    #+#             */
/*   Updated: 2017/09/16 16:12:30 by apelykh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrcpyexcept(char **arr, char *except)
{
	char	**res;
	size_t	arrlen;
	int		i;
	int		j;

	arrlen = ft_arrlen(arr);
	res = ft_arrnew(arrlen - 1);
	i = 0;
	j = 0;
	while (arr[i])
	{
		if (ft_strstr(arr[i], except) != arr[i])
			res[j++] = ft_strdup(arr[i]);
		i++;
	}
	return (res);
}
