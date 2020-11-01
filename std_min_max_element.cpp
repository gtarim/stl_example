#include <iostream>
#include <vector>
#include <numeric> //for max_element and min_element

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};
    
    std::cout << "max_element=" << *std::max_element(vec.begin(), vec.end()) << std::endl;
    std::cout << "min_element=" << *std::min_element(vec.begin(), vec.end()) << std::endl;

    return 0;
}
