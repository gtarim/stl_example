#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(int argc, char const *argv[])
{
    
    std::vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};
    std::for_each(vec.begin(), vec.end(), [](int &val) { std::cout << val << " "; });
    std::cout << std::endl;

    std::reverse(vec.begin(), vec.end());
    std::for_each(vec.begin(), vec.end(), [](int &val) { std::cout << val << " "; });
    std::cout << std::endl;

    return 0;
}
