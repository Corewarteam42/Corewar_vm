/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lexer_comment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:18:37 by abary             #+#    #+#             */
/*   Updated: 2016/11/11 13:18:37 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_asm.h"

int		ft_lexer_comment(t_lexer *lexer, t_token *token)
{
	int i;

	if (*(lexer->focus) == COMMENT_CHAR)
	{
		i = 0;
		while (i < lexer->size_line && *(lexer->focus + i) != '\n')
			++i;
		ft_get_value(lexer, token, i);
		lexer->focus += i;
		token->token = COMMENT;
		lexer->size_line -= i;
		return (1);
	}
	return (0);
}
