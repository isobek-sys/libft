/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 08:54:29 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/14 12:22:28 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f) (t_list *elelm))
{
	if (f && lst)
		while (lst)
		{
			f(lst);
			lst = lst->next;
		}
}