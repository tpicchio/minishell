/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smontuor <smontuor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:24:50 by smontuor          #+#    #+#             */
/*   Updated: 2024/05/13 18:35:07 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_type	ft_isand(char *token)
{
	if (token[0] == '&' && token[1] == '&')
		return (AND);
	return (ft_isor(token));
}
