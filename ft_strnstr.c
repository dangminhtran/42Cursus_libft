/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:31:32 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/18 19:18:16 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		while (big[i + j] && big[i + j] == little[j] && i
			+ j < len)
			j++;
		if (!little[j])
			return ((char *)big + i);
		i++;
		j = 0;
	}
	return (NULL);
}
