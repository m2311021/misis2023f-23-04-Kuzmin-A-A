#include <iostream>

int main()
{
	int w;
	int d1, d2, d3, d4;
	std::cin >> w;
	w = w + 1;
	d1 = w / 1000;
	d2 = w / 100 % 10;
	d3 = w / 10 % 10;
	d4 = w % 10;
	if (d1 == d2 or d1 == d3 or d1 == d4 or d2 == d3 or d2 == d4 or d3 == d4)
	{
		while (d1 == d2 or d1 == d3 or d1 == d4 or d2 == d3 or d2 == d4 or d3 == d4)
		{
			w = w + 1;
			d1 = w / 1000;
			d2 = w / 100 % 10;
			d3 = w / 10 % 10;
			d4 = w % 10;
		}
	}
	std::cout << w;
}
