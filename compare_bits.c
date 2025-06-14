#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	compare_bits(int x, int y)
{
	printf("Shared bit-weight sum of integers is %d\nWhy? Look at this:\n", x & y);
}

int     ft_binary(unsigned int octet)
{
        int     i;
        int     res;
        int     n;
        int     c;
        int     count;

        i = 31;
        res = 0;
        n = 0;
        count = 0;
        while (i >= 0)
        {
                res *= 10;
                c = ((octet >> i) & 1);
                if (c == 1)
                        count++;
                else if (c == 0)
                {
                        if (count > n)
                               n = count;
                        count = 0;
                }
                printf("%d", c);
                i--;
        }
        if (count > n)
                return (count);
        else
                return (n);
}

int	main(void)
{
	int	x;
	int	y;
	int	xb;
	int	yb;
	printf("Give me two numbers to compare their bits:");
	scanf("%d %d", &x, &y);
	compare_bits(x, y);
	printf("x in binary = "); 
	xb = ft_binary(x);
	printf("\n");
	printf("y in binary = "); 
	yb = ft_binary(y);
}
