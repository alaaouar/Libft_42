/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:00:09 by alaaouar          #+#    #+#             */
/*   Updated: 2024/07/22 14:00:15 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*head;

	if (!lst)
		return (0);
	head = lst;
	i = 0;
	while (head != NULL)
	{
		head = head -> next;
		i++;
	}
	return (i);
}
