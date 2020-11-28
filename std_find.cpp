#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};
    int value = 12;

    auto it = std::find(vec.begin(), vec.end(), value);
    std::cout << "std::find value = " << value << " found at index = " << it - vec.begin() << std::endl;
    std::cout << std::endl;

    it = std::find_if(vec.begin(), vec.end(), [](const int &v) { return v % 2; });
    std::cout << "std::find_if value = " << value << " found first odd value index = " << it - vec.begin() << std::endl;
    std::cout << std::endl;

    it = std::find_if_not(vec.begin(), vec.end(), [](const int &v) { return v % 2; });
    std::cout << "std::find_if value = " << value << " found first even value index = " << it - vec.begin() << std::endl;
    std::cout << std::endl;

    return 0;
}
