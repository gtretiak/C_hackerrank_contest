#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct s_phone_book
{
	char	*name;
	int	num;
	struct s_phone_book	*next;
}	t_phone_book;

t_phone_book	*ft_find_last(t_phone_book *pb)
{
	if (!pb)
		return (NULL);
	while (pb->next)
		pb = pb->next;
	return (pb);
}

char	*ft_substr(char *s, unsigned long start, int size)
{
	int	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (start > strlen(s))
		return (strdup(""));
	if (start + size > strlen(s))
		size = strlen(s + start);
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	while (size > i)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

void	ft_fill_stack(t_phone_book **pb, char **s, int n)
{
	int	i;
	int	j;
	t_phone_book	*node;
	t_phone_book	*last;

	i = 0;
	while (i < n)
	{
		j = 0;
		node = malloc(sizeof(t_phone_book));
		node->name = NULL;
		node->num = 0;
		node->next = NULL;
		while (s[i][j] && isalpha(s[i][j]))
			j++;
		node->name = ft_substr(s[i], 0, j);
		j++;
		while (s[i][j] && isdigit(s[i][j]))
		{
			node->num *= 10;
			node->num += s[i][j] - '0';
			j++;
		}
		if (!(*pb))
			*pb = node;
		else
		{
			last = ft_find_last(*pb);
			last->next = node;
		}
		i++;
	}
}

void	ft_free_arr(char **s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	ft_free_stack(t_phone_book *stack)
{
	t_phone_book	*tmp;

	while (stack)
	{
		if (stack->name)
			free(stack->name);
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}

t_phone_book	*ft_find_node(char *s, t_phone_book *pb)
{
	int	len;

	if (!s)
		return (NULL);
	len = strlen(s);
	if (s[len - 1] == '\n')
		s[len - 1] = '\0';
	while (pb)
	{
		if (!strcmp(s, pb->name))
			return (pb);
		pb = pb->next;
	}
	return (NULL);
}

int	main(void)
{
	int	n;
	int	i;
	char	str[40];
	char	**s;
	t_phone_book	*pb;
	t_phone_book	*test;

	printf("Let's fill the phone book! How many contacts are expected: ");
	scanf("%d", &n);
	getchar();
	pb = NULL;
	i = 0;
	s = malloc(sizeof(char *) * n);
	printf("Insert contacts in format <NAME=921754132>\n");
	while (i < n)
	{
		printf("The %d contact: ", i + 1);
		s[i] = calloc(sizeof(char), 40);
		fgets(s[i], 40, stdin);
		i++;
	}
	ft_fill_stack(&pb, s, n);
	printf("\nThe phone book is filled!\n"
		"Do you want to search someone's contact?\n"
		"Enter the name OR press Ctrl+D if you're done:\n");
	ft_free_arr(s, n);
	while (1)
	{
		if (!fgets(str, sizeof(str), stdin))
			break ;
		test = ft_find_node(str, pb);
		if (test)
			printf("%s=%d\n", test->name, test->num);
		else
			printf("Not found\n");
	}
	ft_free_stack(pb);
	return (0);
}
