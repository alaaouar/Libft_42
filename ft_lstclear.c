/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:58:07 by alaaouar          #+#    #+#             */
/*   Updated: 2024/07/22 13:58:15 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*n;

	n = *lst;
	if (!del || !lst)
		return ;
	while (n)
	{
		temp = n -> next;
		ft_lstdelone(n, del);
		n = temp;
	}
	*lst = NULL;
}
