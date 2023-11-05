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
		if ((sx-1<=d and sy-1<=d) or (m-sy<=d and n - sx<=d) or (sy-1<=d and m-sy<=d) or (sx-1<=d and n-sx<=d))
		{
			std::cout << -1<<std::endl;
		}
		else
		{
			std::cout << abs(1 - n) + abs(1 - m) << std::endl;
		}
	}
}
