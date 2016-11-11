/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lexer_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:18:39 by abary             #+#    #+#             */
/*   Updated: 2016/11/11 13:18:39 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include "ft_asm.h"

void		ft_get_value(t_lexer *lexer, t_token *token, int size)
{
	if (!(token->value = ft_memalloc(sizeof(char) + size + 1)))
		return ;
	token->size = size;
	ft_memcpy(token->value, lexer->focus, size);
}