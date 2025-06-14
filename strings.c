#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_free(char **s, int n)
{
	int	i = 0;
	while (i < n)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	ft_print_odd(char *s)
{
	int	i = 0;
	while (s[i])
	{
		if (i % 2 == 0)
			write(1, &s[i], 1);
		i++;
	}
}

void	ft_print_even(char *s)
{
	int	i = 1;
	while (s[i])
	{
		if (i % 2 != 0)
			write(1, &s[i], 1);
		i++;
	}
}

int main() {

    char    **s;
    int n;
    int i = 0;
    int j = 0;
    printf("Enter number of test cases: ");
    scanf("%d", &n);
	getchar();
	s = malloc(sizeof(char *) * n);
    while (i < n)
    {
        s[i] = calloc(sizeof(char), 10024);
	printf("Insert the %d string: ", i + 1);
        fgets(s[i], 10024, stdin);
	s[i][strcspn(s[i], "\n")] = '\0';
	i++;
    }
    while (j < n)
    {
       	printf("The %d string splitted in two looks like:\n", j + 1);
	ft_print_odd(s[j]);
	write(1, " ", 1);
	ft_print_even(s[j]);
	write(1, "\n", 1);
	j++;
    }
	ft_free(s, n);
    return 0;
}

