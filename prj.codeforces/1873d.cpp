#include <iostream>
#include <vector>

int main()
{
    int l;
    std::cin >> l;
    int n;
    int k;
    int count;
    std::string h;
    std::string symbol;
    std::vector <std::string> a;

    for (int i = 0; i < l; i++)
    {
        std::cin >> n >> k;
        a.clear();
        count = 0;
        std::cin >> h;
        for (int g = 0; g < n; g++)
        {
            symbol = h[g];
            a.push_back(symbol);
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] == "B")
            {
                j = j + k-1;
                count++;
            }
        }
    std::cout << count<<std::endl;
    }
}
