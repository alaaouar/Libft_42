/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:35:21 by alaaouar          #+#    #+#             */
/*   Updated: 2023/11/22 09:19:42 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	if (!haystack && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		while (haystack[j + i] == needle[i] && (j + i) < len)
		{
			if (haystack[j + i] == '\0' && needle[i] == '\0')
				return ((char *)&haystack[j]);
			i++;
		}
		if (needle[i] == '\0')
			return ((char *)haystack + j);
		j++;
	}
	return (0);
}
