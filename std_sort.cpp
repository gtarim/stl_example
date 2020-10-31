#include <iostream>
#include <vector>
#include <algorithm>

bool compare_func(const int first, const int second)
{
    return first > second;
}

int main(int argc, char const *argv[])
{
    // std::sort<int>
    // std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};
    // std::sort(intVec.begin(), intVec.end());
    // for (std::vector<int>::size_type i = 0; i != intVec.size(); ++i)
    //     std::cout << intVec[i] << " ";
    // std::cout << std::endl;

    // std::sort<string>
    // std::vector<std::string> stringVec = {"John", "Bob", "Joe", "Zack", "Randy"};
    // std::sort(stringVec.begin(), stringVec.end());
    // for (std::vector<int>::size_type i = 0; i != stringVec.size(); ++i)
    //     std::cout << stringVec[i] << " ";
    // std::cout << std::endl;

    // std::sort<int> with compare function
    std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};
    std::sort(intVec.begin(), intVec.end(), compare_func);
    for (std::vector<int>::size_type i = 0; i != intVec.size(); ++i)
        std::cout << intVec[i] << " ";
    std::cout << std::endl;

    return 0;
}
