#include "key.h"

void do_code(t_push **keyy, t_push **input_wordd)
{
	t_push *z;
	t_push *y;
	int		l;

	z = *keyy;
	y = *input_wordd;
	printf("Encrypted message: ");
	while (y->next != NULL)
	{
		if (z == NULL)
			z = *keyy;
		l = (y->index + z->index);
		if (l >= 53)
			l = l % 53;
		printf("%c", srch_letter(l));
		y = y->next;
		z = z->next;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
    int 			i;
    char 			*key;
    char 			*input_word;
	(void)			argc;
	static t_push	*keyy;
	static t_push	*input_wordd;

	i = 0;
    printf("Enter the message: ");
    input_word = malloc(sizeof(char) * ft_strlen(*argv) + 1);
    scanf("%s", input_word);
	while (input_word[i])
		i++;
	while (i >= 0)
		push(&input_wordd, input_word[i], srch_indx(input_word[i])), i--;
    printf("Enter the key: ");
    key = malloc(sizeof(char) * ft_strlen(*argv) + 1);
    scanf("%s", key);
	i = 0;
	while (key[i])
		i++;
	while (i >= 0)
		push(&keyy, key[i], srch_indx(key[i])), i--;
	do_code(&keyy, &input_wordd);
	free(input_word);
    free(key);
    return (0);
}