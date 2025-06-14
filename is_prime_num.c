#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char	*ft_is_prime(int n)
{
	if (n <= 1)
		return ("not prime");
	if (n == 2 || n == 3)
		return ("prime");
	if (!(n % 2)) // checking all even numbers
		return ("not prime");
	for (int i = 3; i * i <= n; i += 2) // checking the sequence of odd numbers
	{
		if (!(n % i))
			return ("not prime");
	}
	return ("prime");
}

int	main(void)
{
	int	test_cases;
	int	i;
	int	*nums;

	printf("Enter the number of test cases: ");
	scanf("%d", &test_cases);
	i = 0;
	nums = malloc(sizeof(int) * test_cases);
	printf("Now enter %d integers to check if they are prime or not.\n", test_cases);
	while (i < test_cases)
		scanf("%d", &nums[i++]);
	i = 0;
	while (i < test_cases)
	{
		printf("The %d integer (with value %d) is %s\n", i + 1, nums[i], ft_is_prime(nums[i]));
		i++;
	}
	free(nums);
	return (0);
}
