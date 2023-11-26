/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:35:28 by alaaouar          #+#    #+#             */
/*   Updated: 2023/11/21 18:25:35 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search(char c, char const *set)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*ret_string;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (search(*s1, set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (search(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	ret_string = (char *)malloc(size * sizeof(char) + 1);
	if (!ret_string)
		return (NULL);
	ft_strlcpy(ret_string, (char *)s1, size + 1);
	return (ret_string);
}
