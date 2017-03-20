#include <cstdio>

int main()
{
	int n, a, b, index, n_one_bit;

	while (true)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		a = 0; b = 0; index = 0; n_one_bit = 0;

		while (n > 0)
		{
			if (n % 2 == 1)
			{
				if (n_one_bit % 2 == 0)
					a += 1 << index;
				else
					b += 1 << index;
				n_one_bit++;
			}
			n = n >> 1;
			index++;
		}

		printf("%d %d\n", a, b);
	}

	return 0;
}
