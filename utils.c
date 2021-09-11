#include "key.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	push(t_push **plist, char data, int indx)
{
	t_push	*p;

	if (!plist)
		return ;
	p = malloc(sizeof(t_push));
	if (!p)
		return ;
	p->letter = data;
	p->index = indx;
	p->next = *plist;
	*plist = p;
}

int srch_indx(char letter)
{
	char alphabet[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.";
	int i;

    i = 0;
	while (alphabet[i])
    {
        if (alphabet[i] == letter)
            return(i);
		i++;
    }
	return (0);;
}

char srch_letter(int letter_index)
{
    char alphabet[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.";
	
    return (alphabet[letter_index]);
}
