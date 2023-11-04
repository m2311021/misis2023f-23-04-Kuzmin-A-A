#include <iostream>
#include <vector>
#include <string>

int main()
{
	int t;
	std::cin >> t;
	int n;
	std::string c;
	std::string a, a1;
	std::vector <std::string> s;
	int b1 = 0, b2 = 0;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		std::cin >> c;
		std::cin >> a;
		for (int e = 0; e < n; e++)
		{
			a1 = a[e];
			s.push_back(a1);
		}
		for (int j = 0; j < t; j++)
		{
			if (s[j+b2-b1] == c)
			{
				b1 = j;
				while (s[j] != "g")
				{
					if (j+1<n)
					{
						j++;
						b2 = j;
					}
				}
			}
		}
		std::cout << b2 - b1;
	}
}
