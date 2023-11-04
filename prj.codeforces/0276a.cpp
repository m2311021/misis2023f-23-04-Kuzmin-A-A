#include <iostream>

int main()
{
	int n, k,f,t, s = -1000000000, r;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> f >> t;
		if (t > k)
		{
			r = f - (t - k);
		}
		else
		{
			r = f;
		}
		if (r > s)
		{
			s = r;
		}
	}
	std::cout<<s;
}
