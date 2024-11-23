/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:16:30 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/18 21:03:23 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char		*dest;

	if (!str)
		return (NULL);
	if (ft_strlen(str) < start)
		len = 0;
	if (ft_strlen(str) - start < len)
		len = ft_strlen(str + start);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	while (len--)
		dest[len] = str[start + len];
	return (dest);
}
