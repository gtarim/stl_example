#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = { 1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 }, i; 

    std::for_each(vec.begin(), vec.end(), [](const int &val){ std::cout << val << " "; });
    std::cout << std::endl;

    auto iter = std::unique(vec.begin(), vec.end()); 
    vec.resize(std::distance(vec.begin(), iter));

    std::for_each(vec.begin(), vec.end(), [](const int &val){ std::cout << val << " "; });
    std::cout << std::endl;

    return 0;
}
