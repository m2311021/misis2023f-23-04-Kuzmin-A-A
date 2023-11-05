#include <iostream>
#include <vector>
 
int main()
{
	int n;
	std::vector<int> a;
	int an;
 
	/*заполнение массива*/
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> an;
		a.push_back(an);
	}
	/*удаление дубликата массива*/
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			if ((a[i] == a[j]) and (i != j))
			{
				a.erase(a.begin() + i);
				j = 0;
			}
		}
	}
 
	/*вывод число элементов массива и массив*/
	std::cout << a.size()<<std::endl;
	for (int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << " ";
	}
}
