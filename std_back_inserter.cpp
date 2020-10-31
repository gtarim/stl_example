#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};
    std::vector<int> newVec;
    newVec.push_back(5);
    newVec.push_back(6);
    newVec.push_back(7);

    // std::back_inserter
    std::copy(intVec.begin(), intVec.end(), std::back_inserter(newVec));
    std::cout << "newVec.size() = " << newVec.size() << std::endl;
    for (std::vector<int>::size_type i = 0; i != newVec.size(); ++i)
        std::cout << newVec[i] << " ";
    std::cout << std::endl;

    return 0;
}
