// homework_up_7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ¬ условии задачи не пон€тно, что такое "числа поступают из стандартного потока ввода"

#include <iostream>
#include <vector>
#include <algorithm>

bool More(int a, int b)
{
    return a > b;
}
void dropDup(std::vector<int>& v1)
{
    for (auto base = v1.begin(); base != v1.end(); ++base)
    {
        for (auto it = base + 1; it != v1.end(); )
        {
            if (*base == *it)
            {
                it = v1.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }
}
int main()
{
    std::cout << "Hello World!\n";

    std::cout << "[IN]: " << std::endl;

    int n = 6;

    std::cout << n << std::endl;

    std::vector<int> v1 = { 1, 5, 1, 3, 4, 4 };

    for (auto element : v1)
    {
        std::cout << element << std::endl;
    }

    auto result = std::unique(begin(v1), end(v1));

    dropDup(v1);

    sort(v1.begin(), v1.end(), More);

    std::cout << "[OUT]: " << std::endl;

    for (auto element : v1)
    {
        std::cout << element << std::endl;
    }
}

