#include <iostream>

int main()
{
	int x, step;
	std::cin >> x;
	if (x % 5 == 0)
	{
		step = x / 5;
	}
	else
	{
		step = x / 5 + 1;
	}
	std::cout << step;
}
