/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 00:47:04 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/04 00:59:56 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((char) c >= 'a' && (char) c <= 'z')
		return (1024);
	if ((char) c >= 'A' && (char) c <= 'Z')
		return (1024);
	return (0);
}