/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:12:37 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/18 20:13:55 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedChar)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)searchedChar)
			return ((char *)(str + i));
		i++;
	}
	if (!(char)searchedChar)
		return ((char *)(str + i));
	return (NULL);
}
