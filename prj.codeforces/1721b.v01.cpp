#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	int n, m;
	int sx, sy;
	int d;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n >> m >> sx >> sy >> d;
		if ((abs(sx - n) + abs(sy - m) <= d) or (d+1>=n) or (d+1>=m))
		{
			std::cout << -1<<std::endl;
		}
		else
		{
			std::cout << abs(1 - n) + abs(1 - m) << std::endl;
		}
	}
}
