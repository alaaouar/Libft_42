/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:59:52 by alaaouar          #+#    #+#             */
/*   Updated: 2024/07/22 13:59:58 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*main;

	main = (t_list *)malloc(sizeof(t_list));
	if (!main)
		return (NULL);
	main -> content = content;
	main -> next = NULL;
	return (main);
}
