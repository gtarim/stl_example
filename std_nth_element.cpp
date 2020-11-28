#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};

    std::for_each(vec.begin(), vec.end(), [](const int& val) { std::cout << val << " "; });
    std::cout << std::endl;

    std::nth_element(vec.begin(), vec.begin() + 5, vec.end(), [](const int &a, const int &b)
    {
        return (a < b); 
    });

    std::for_each(vec.begin(), vec.end(), [](const int& val) { std::cout << val << " "; });
    std::cout << std::endl;

    return 0;
}
