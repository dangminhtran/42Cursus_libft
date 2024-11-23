/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:58:47 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/18 20:10:47 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	while (src[i] && i < size - dest_len - 1)
	{
			dest[dest_len + i] = src[i];
			i++;
	}
	dest[dest_len + i] = 0;
	return (dest_len + src_len);
}
