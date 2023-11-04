#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	int count = 0;
	std::string a, a1;
	std::vector <std::string> s;
	std::cin >> a;
	for (int j = 0; j < n; j++)
	{
		a1 = a[j];
		s.push_back(a1);
	}
		for (int i = 0; i < n - 2; i++)
		{
			if ((s[i] == "x") and (s[i + 1] == "x") and (s[i + 2] == "x"))
			{
				count = count + 1;
			}
		}
	std::cout << count;
}
