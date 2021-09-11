#ifndef KEY_H
# define KEY_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_push
{
	char			letter;
	int				index;
	int				key_index;
	struct s_push	*next;
}				t_push;

size_t	ft_strlen(const char *str);
void	push_key(t_push **plist, char data, int indx);
void	push(t_push **plist, char data, int indx);
int		srch_indx(char letter);
char	srch_letter(int letter_index);



#endif