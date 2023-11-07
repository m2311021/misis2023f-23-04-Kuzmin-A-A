#include <iostream>
#include <vector>
int main()
{
	int t;
	std::cin >> t;
	int n, k, x, y;
	int m;
	int i;
	std::vector <std::string> a;
	std::vector <std::string> b;
	for (int p = 0; p < t; p++)
	{
		std::cin >> n >> k >> x >> y;
		int s = n / k;
		m = k;
		while (x - k > 0)
		{
			x = x - k;
		}
		while (y - k > 0)
		{
			y = y - k;
		}
		if (k == 1)
		{
			for (int i = 0; i < n * n; i++)
			{
				a.push_back("X");
			}
		}
		for (int i = 1; i < m + 1; i++)
		{
			for (int j = 1; j < m + 1; j++)
			{
				if (((i == j) and (i != x and i != y and j != x and j != y)) or (x == i and y == j) or (y == i and x == j))
				{
					a.push_back("X");
				}
				else
				{
					a.push_back(".");
				}
				if (j == k)
				{
					for (int f = 0; f < s; f++)
					{

						for (int h = 0; h < k; h++)
						{
							b.push_back(a[h]);
						}
					}
					a.clear();
				}
			}
		}
		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j < b.size(); j++)
			{
				a.push_back(b[j]);
			}
		}
		i = 0;
		for (int j = 0; j < n*n; j++)
		{
			if (i != n-1)
			{
				std::cout << a[j];
				i = i + 1;
			}
			else
			{
				std::cout << a[j] << std::endl;
				i = 0;
			}
		}
		a.clear();
		b.clear();
	}
}
