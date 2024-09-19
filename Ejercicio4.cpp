#include <iostream>
int rev(int n);

int main()
{
	int max = 0;
	for (int i = 100; i <= 999; i++)
	{
		for (int j = 100; j <= 999; j++)
		{
			if (i * j == rev(i * j) && i * j > max)
			{
				max = i * j;
			}
		}
	}
	std::cout << max;
	return 0;
}

int rev(int n)
{
	int m = 0;

	while (n > 0)
	{
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return m;
}