/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:26:10 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/16 10:10:20 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	if (size != 0 && count > (size_t) - 1 / size)
		return (NULL);
	dest = malloc(count * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (count * size));
	return (dest);
}
