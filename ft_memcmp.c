/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:21:54 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/13 16:19:51 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	size_t				i;
	const unsigned char	*tmp_ptr1;
	const unsigned char	*tmp_ptr2;

	tmp_ptr1 = (const unsigned char *)ptr1;
	tmp_ptr2 = (const unsigned char *)ptr2;
	i = 0;
	while (i < size)
	{
		if (tmp_ptr1[i] != tmp_ptr2[i])
			return (tmp_ptr1[i] - tmp_ptr2[i]);
		i++;
	}
	return (0);
}
