
#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};
    std::vector<int> newVec(intVec.size());

    // std::for_each
    std::for_each(intVec.begin(), intVec.end(), [](const int& val) { std::cout << val << std::endl; });

    return 0;
}
