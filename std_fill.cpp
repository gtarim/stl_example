#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};

    std::for_each(vec.begin(), vec.end(), [](const int &val){ std::cout << val << " "; });
    std::cout << std::endl;

    std::fill(vec.begin(), vec.end(), -10); 

    std::for_each(vec.begin(), vec.end(), [](const int &val){ std::cout << val << " "; });
    std::cout << std::endl;


    return 0;
}
