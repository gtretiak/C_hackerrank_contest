#include <stdio.h>

int main()
{
int	a;
int	b;
int	c;

scanf("%d %d %d", &a, &b, &c);
if (a >= b && b <= c && a <= c)
	printf("%d", a);
else if (a >= b && b <= c && a >= c)
	printf("%d", c);
else
{
	if (b > c)
	{
		if (c < a)
		{
			if (a < b)
				printf("%d", a);
			else
				printf("%d", b);
		}
		else
			printf("%d", c);
	}
	else
		printf("%d", b);	
}
}
