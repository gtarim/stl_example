

#include <iostream>
#include <vector>
#include <numeric>
#include <functional> // for std::plus
#include <algorithm> // for std::transform

int main(int argc, char const *argv[])
{
    std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};
    std::vector<int> newVec(intVec.size());

    // std::transform
    std::transform(intVec.begin(), intVec.end(), intVec.begin(), newVec.begin(), std::plus<int>());

    // std::for_each
    std::for_each(newVec.begin(), newVec.end(), [](const int &val) { std::cout << val << std::endl; });

    return 0;
}
