#include <iostream>

int main()
{
	int t;
	int a, b, c;
	int k;
	int count = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> a >> b >> c;
		count = 0;
		if (b < a)
		{
			k = b;
			b = a;
			a = k;
		}
		while (a < b)
		{
			a = a + c;
			b = b - c;
			count = count + 1;
		}
		std::cout << count<<std::endl;
	}
}
