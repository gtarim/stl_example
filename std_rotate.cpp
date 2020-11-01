#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};

    std::for_each(vec.begin(), vec.end(), [](const int &val){ std::cout << val << " "; });
    std::cout << std::endl;

    std::rotate(vec.begin(), vec.begin() + 3, vec.end()); 

    std::for_each(vec.begin(), vec.end(), [](const int &val){ std::cout << val << " "; });
    std::cout << std::endl;

    return 0;
}
