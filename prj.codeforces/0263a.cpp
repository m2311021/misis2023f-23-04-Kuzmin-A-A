#include <iostream>

int main()
{
	int row;
	int column;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int n;
			std::cin >> n;
			if (n == 1)
			{
				row = i;
				column = j;
			}
		}
	}
	std::cout << abs(2 - row) + abs(2 - column) << std::endl;
	return 0;
}
