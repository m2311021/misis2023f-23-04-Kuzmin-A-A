#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	int t;
	int n, x;
	int h;
	std::vector <int> a;
	int a1;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> n >> x;
		for (int j = 0; j < n; j++)
		{
			std::cin >> a1;
			a.push_back(a1);
		}
		h = 1;
		while (x !=0)
		{
			bool found = std::find(a.begin(), a.end(), h) != a.end();
			if (found == false)
			{
				x = x - 1;
			}
			if (x > 0)
			{
				h = h + 1;
			}
		}
		for (int g = h+1;;g++)
		{
			bool found = std::find(a.begin(), a.end(), g) != a.end();
			if (found == true)
			{
				h = h + 1;
			}
			else
			{
				std::cout << h << std::endl;
				a.clear();
				break;
			}
		}
	}
}
