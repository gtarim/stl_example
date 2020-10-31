#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    // std::greater added sort
    std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};
    std::sort(intVec.begin(), intVec.end(), std::greater<int>());
    for (std::vector<int>::size_type i = 0; i != intVec.size(); ++i)
        std::cout << intVec[i] << " ";
    std::cout << std::endl;

    return 0;
}
