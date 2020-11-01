#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};

    bool allOf = std::all_of(vec.begin(), vec.end(), [](const int& val) { return val > 0;});
    bool anyOf = std::any_of(vec.begin(), vec.end(), [](const int& val) { return val > 0;});
    bool noneOf = std::none_of(vec.begin(), vec.end(), [](const int& val) { return val > 0;});

    std::cout << "allOf=" << allOf << std::endl;
    std::cout << "anyOf=" << anyOf << std::endl;
    std::cout << "noneOf=" << noneOf << std::endl;

    return 0;
}
