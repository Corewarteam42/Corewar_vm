#include <unistd.h>
#include "ft_asm.h"
#include "libft.h"

char	*ft_get_line(int fd, t_lexer *lexer)
{
	char	c;
	int		ret;
	char	*d;

	lexer->line = 0;
	lexer->offset = lexer->head;
	while ((ret = read(fd, &c, 1)))
	{
		if (ret == -1)
			return (0);
		lexer->offset++;
		if (c == '\n')
			break ;
	}
	lexer->size_line = lexer->offset - lexer->head;
	if (!lexer->size_line)
		return (0);
	if (!(lexer->line = ft_memalloc(sizeof(char) * (lexer->size_line + 1))))
		return (0);
	if (lseek(fd, lexer->head, SEEK_SET) == - 1)
		return (0);
	if (read(lexer->fd, lexer->line, lexer->size_line) == -1)
		return (0);
	lexer->head = lexer->offset;
	return (lexer->line);
}
